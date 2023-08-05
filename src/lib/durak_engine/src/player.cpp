#include "player.hpp"

#include <iostream>

namespace engine
{
    player::player(table& _table) : playerTable(_table)
    {

    };

    void player::giveCard(cards _card)
    {
        hand |= (unsigned long long)_card;
    }

    void player::setState(state _newState)
    {
        curState = _newState;
    }

    void player::getMove()
    {
        std::cout << "virtual player\n";
    }

    void ai::getMove()
    {
        std::cout << "ai player\n";
    }

}