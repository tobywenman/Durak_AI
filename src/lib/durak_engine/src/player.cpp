#include "player.hpp"

player_t::player_t(unsigned _id) : id(id), state(state_t::waiting){}

void player_t::giveCard(card_t card)
{
    hand.insert(card);
}

void player_t::pickUp(hand_t pickups)
{
    hand.merge(pickups);
}

