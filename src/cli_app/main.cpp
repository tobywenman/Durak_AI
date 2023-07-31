#include "engine.hpp"
#include "main.hpp"
#include "cardPrint.hpp"

#include <iostream>
#include <string>
#include <algorithm>
#include <random>
#include <chrono>

unsigned get_player_num()
{
    unsigned playerNum = 0;
    while (playerNum == 0)
    {
        std::cout << "Enter number of players: ";
        try
        {
            std::string input;
            std::cin >> input;

            playerNum = std::stoi(input);
            if (playerNum < 2 || playerNum > 6)
            {
                playerNum = 0;
                throw InvalidPlayerCount();
            }
        }
        catch (InvalidPlayerCount exc)
        {
            std::cout << "Invalid player count\n";
        }
        catch (std::invalid_argument exc)
        {
            std::cout << "Please enter valid number\n";
        }
    }
    return playerNum;
}

void game::deal()
{
    std::bitset<52> card = 1;

    for (unsigned i=0; i<52; i++)
    {
        deck.push_back((engine::cards)card.to_ullong());
        card <<= 1;
    }

    shuffleDeck();
}

game::game(unsigned playerCount)
{
    deal();
}


void game::shuffleDeck()
{
    auto rng = std::default_random_engine {};
    rng.seed(std::chrono::system_clock::now().time_since_epoch().count());
    std::shuffle(deck.begin(), deck.end(), rng);
}

void game::printDeck()
{
    for (auto card : deck)
    {
        std::cout << get_card_name(card) << '\n';
    }
}

int main()
{
    std::cout << "Durak AI game\n";
    
    game testGame(get_player_num());
    
    testGame.printDeck();
    
}