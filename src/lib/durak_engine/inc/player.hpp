#ifndef __player_hpp
#define __player_hpp

#include <bitset>

#include "cards.hpp"
#include "table.hpp"

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
        table &playerTable;
    public:
        player(table& _table);
        ~player(){};

        void giveCard(cards _card);
        void setState(state _newState);      
        virtual void getMove();
    };

    class ai : public player
    {
        public:
            using player::player;
            void getMove() override;
    };
    
}

#endif