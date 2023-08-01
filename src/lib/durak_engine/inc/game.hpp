#include <vector>

#include "cards.hpp"
#include "player.hpp"

namespace engine
{

    class game
    {
        public:
            game(unsigned playerCount);
            virtual void displayDeck() = 0;     
            void update();
        protected:
            void deal();
            void shuffleDeck();
            std::vector<player*> players;
            std::vector<cards> deck;
    };


}