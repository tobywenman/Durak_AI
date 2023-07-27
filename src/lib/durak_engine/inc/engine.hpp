#ifndef __durak_engine
#define __durak_engine

#include <inttypes.h>
#include <vector>

namespace engine
{
    void printTest();

    class cardStack
    {
        public:
            uint64_t cards;
    };

    class player : cardStack
    {
        public:
            unsigned id;
            
    };

    class game
    {
        public:
            game(unsigned numPlayers);
        private:
            std::vector<player> players;
    };

    
};

#endif