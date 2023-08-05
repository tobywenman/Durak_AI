#include "table.hpp"

namespace engine
{
    table::table(){};

    attack::attack(cards _card) : attacker(_card){};
    

    void table::newAttack(cards _card)
    {
        attack newAttack(_card);
        attacks.push_back(newAttack);
    }

    std::bitset<52> table::pickup()
    {
        std::bitset<52> pickupCards;
        for (std::vector<attack>::iterator it = attacks.begin(); it != attacks.end(); it++)
        {
            pickupCards |= it->getCards();
        }
        return pickupCards;
    }

}