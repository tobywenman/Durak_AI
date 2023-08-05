#include "engine.hpp"
#include "main.hpp"
#include "cardPrint.hpp"
#include "cliPlayer.hpp"

#include <iostream>

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

void cliGame::displayDeck()
{
    for (auto card : deck)
    {
        std::cout << get_card_name(card) << '\n';
    }
}

int main()
{
    std::cout << "Durak AI game\n";
    
    cliGame testGame;

    cliPlayer* p1 = new cliPlayer(testGame.gameTable);

    testGame.addPlayer(p1);

    unsigned playerNum = get_player_num();

    for (unsigned i=0; i<(playerNum-1); i++)
    {
        engine::ai* _ai = new engine::ai(testGame.gameTable);
        testGame.addPlayer(_ai);
    }
    
    testGame.update();

    
}