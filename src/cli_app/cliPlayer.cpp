#include "cliPlayer.hpp"
#include "cardPrint.hpp"
#include "cards.hpp"

#include <iostream>

void cliPlayer::getMove()
{
    std::cout << "cli player\n";
}

void cliPlayer::getAttack()
{

}

void cliPlayer::showHand()
{
    std::cout << "hand:\n";
    for(unsigned i=0; i<52; i++)
    {
        if (hand[i])
        {
            engine::cards card = (engine::cards)(1<<i);
            std::cout << get_card_name(card) << ' ';
        }
    }
    std::cout << '\n';
}