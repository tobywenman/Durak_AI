#include <exception>

class InvalidPlayerCount : std::exception
{
};

unsigned get_player_num();