#ifndef __table_hpp
#define __table_hpp

#include <vector>
#include <bitset>

#include "cards.hpp"

namespace engine
{
    class attack
    {
    private:
        cards attacker;
        cards defender;
    public:
        attack(cards _card);
        void defend(cards _card);
        std::bitset<52> getCards(){return 0;};
    };

    class table
    {
    private:
        std::vector<attack> attacks;
    public:
        table();
        bool isFinished(){return false;};
        void newAttack(cards _card);
        std::bitset<52> pickup();
    };    
}

#endif