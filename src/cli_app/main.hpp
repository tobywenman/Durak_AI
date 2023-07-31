#include <exception>
#include <vector>

#include "cards.hpp"

class InvalidPlayerCount : std::exception
{
};

unsigned get_player_num();

class game
{
    public:
        game(unsigned playerCount);
        void printDeck();      
    private:
        void deal();
        void shuffleDeck();
        
        std::vector<engine::cards> deck;
};