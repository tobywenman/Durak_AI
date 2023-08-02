#include "player.hpp"

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
}