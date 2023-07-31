#include <vector>

#include "cards.hpp"

namespace engine
{

    class game
    {
        public:
            game(unsigned playerCount);
            virtual void displayDeck() = 0;     
        protected:
            void deal();
            void shuffleDeck();
            
            std::vector<cards> deck;
    };


}