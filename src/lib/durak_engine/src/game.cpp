#include "game.hpp"

#include <bitset>
#include <algorithm>
#include <random>
#include <chrono>

namespace engine
{
    void game::deal()
    {
        std::bitset<52> card = 1;

        for (unsigned i=0; i<52; i++)
        {
            deck.push_back((engine::cards)card.to_ullong());
            card <<= 1;
        }

        shuffleDeck();
        for (unsigned i=0; i<6; i++)
        {
            for (std::vector<player>::iterator it=players.begin(); it != players.end(); it++)
            {
                it->giveCard(deck.back());
                deck.pop_back();
            }
        }

        trump = deck.front();

        for (unsigned i=0; i<players.size();i++)
        {
            switch (i)
            {
            case 0:
                players[i].setState(player::state::attacker);
                break;
            case 1:
                players[i].setState(player::state::defender);
                break;
            default:
                players[i].setState(player::state::spectator);
                break;
            }   
        }
    }

    game::game(unsigned _playerCount)
    {
        for (unsigned i=0; i<_playerCount; i++)
        {
            player newPlayer(gameTable);
            players.push_back(newPlayer);
        }
        playerCount = _playerCount;
        deal();
    }


    void game::shuffleDeck()
    {
        auto rng = std::default_random_engine {};
        rng.seed(std::chrono::system_clock::now().time_since_epoch().count());
        std::shuffle(deck.begin(), deck.end(), rng);
    }

    void game::update()
    {
        while (!gameTable.isFinished())
        {
            for (std::vector<player>::iterator it=players.begin(); it != players.end(); it++)
            {
                it->getMove();
            }
        }
        std::rotate(players.begin(),players.begin()+1,players.end());
        players[0].setState(player::state::attacker);
        players[1].setState(player::state::defender);
        players.back().setState(player::state::spectator);
    }

}