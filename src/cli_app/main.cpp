#include "engine.hpp"
#include "main.hpp"

#include <iostream>
#include <string>

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

int main()
{
    std::cout << "Durak AI game\n";
    
    game testGame(get_player_num());
    
    
}