#pragma once

#include <cstdint>

#include "cards.hpp"
#include "player.hpp"


// Views into the current game state 
struct otherPlayerView_t
{
    unsigned id;
    std::uint8_t handSize;
    player_t::state_t state;
};

struct selfPlayerView_t
{
    unsigned id;
    hand_t hand;
    player_t::state_t state;
};

struct gameView_t
{
    std::uint8_t pickUpPileSize;
    card_t trump;

    hand_t attacks;
    hand_t defenders;

    std::vector<otherPlayerView_t> otherPlayerStates;
    selfPlayerView_t selfPlayerState;
};

// Requests players make to the game

// All attacks and defenses are done 1 card at a time. 
// To attack with many cards just ripple single cards quickly
// The motivation here is because it will simplify a bunch of edge cases 
// Like the player not having enough cards to defend all of the attacks
struct attack_t
{
    unsigned playerId;
    card_t attack;
};

struct defense_t
{
    unsigned playerId;
    card_t defender;
    card_t target;
};

