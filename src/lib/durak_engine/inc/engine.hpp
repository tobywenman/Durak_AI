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

    class player
    {
        private:
            cardStack hand;
            unsigned handSize;
            
    };

    class game
    {
        public:
            game(unsigned numPlayers);
        private:
            std::bitset<52> pickUpStack;
            std::vector<player> players;
            suits trump;
    };

    
};

#endif