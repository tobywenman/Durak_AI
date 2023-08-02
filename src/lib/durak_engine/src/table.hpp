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
    };

    class table
    {
    private:
        std::vector<attack> attacks;
    public:
        table();
        bool isFinished();
        void newAttack(cards _card);
        std::bitset<52> pickup();
    };    
}