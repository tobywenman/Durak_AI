#ifndef __durak_engine
#define __durak_engine

#include <bitset>
#include <vector>

namespace engine
{
    enum suits
    {
        spades,
        clubs,
        hearts,
        diamonds
    };

    void printTest();

    class cardStack
    {
        public:
            std::bitset<52> cards;
    };
    
};

#endif