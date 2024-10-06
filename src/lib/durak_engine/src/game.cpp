#include "game.hpp"


game_t::game_t(unsigned numPlayers, unsigned _handSize) : handSize(_handSize)
{
    pickupPile.fill();
    pickupPile.shuffle();

    players.reserve(numPlayers);
    for (unsigned i=0; i<numPlayers; i++)
    {
        players.emplace_back(i);
    }

    trump = pickupPile.pop();
    trumpSuit = getSuit(trump);
    pickupPile.pushBack(trump);

    for (unsigned i=0; i<numPlayers; i++)
    {
        for (unsigned j=0; j<handSize; j++)
        {
            players[i].giveCard(pickupPile.pop());
        }
    }
}

bool game_t::validDefense(card_t defender, card_t attacker)
{
    suit_t attackerSuit = getSuit(attacker);
    suit_t defenderSuit = getSuit(defender);

    if (attackerSuit == defenderSuit)
    {
        return getCardValue(defender) > getCardValue(attacker);
    }
    else if (defenderSuit == trumpSuit && attackerSuit != trumpSuit)
    {
        return true;
    }
    else
    {
        return false;
    }
}