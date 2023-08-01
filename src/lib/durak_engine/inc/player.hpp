#include <bitset>

#include "cards.hpp"

namespace engine
{
    class player
    {
    public:
        enum state
        {
            attacker,
            defender,
            spectator
        };
    private:
        std::bitset<52> hand;
        state curState;
    public:
        player();

        void giveCard(cards _card);
        void setState(state _newState);      
        void getMove();
    };
    
}