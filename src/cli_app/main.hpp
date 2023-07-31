#include <exception>
#include <vector>

#include "cards.hpp"
#include "game.hpp"

class InvalidPlayerCount : std::exception
{
};

unsigned get_player_num();

class cliGame : public engine::game
{
    public:
        using engine::game::game;
        void displayDeck();
};