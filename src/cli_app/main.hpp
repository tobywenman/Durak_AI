#include <exception>
#include <stack>

#include "cards.hpp"

class InvalidPlayerCount : std::exception
{
};

unsigned get_player_num();

class game
{
    public:
        game(unsigned playerCount);
    private:
        std::stack<engine::cards> deck;
};