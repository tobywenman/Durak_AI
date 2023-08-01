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
            for (std::vector<player*>::iterator it=players.begin(); it != players.end(); it++)
            {
                (*it)->giveCard(deck.back());
                deck.pop_back();
            }
        }
    }

    game::game(unsigned playerCount)
    {
        for (unsigned i=0; i<playerCount; i++)
        {
            players.push_back(new player);
        }

        deal();
    }


    void game::shuffleDeck()
    {
        auto rng = std::default_random_engine {};
        rng.seed(std::chrono::system_clock::now().time_since_epoch().count());
        std::shuffle(deck.begin(), deck.end(), rng);
    }

}