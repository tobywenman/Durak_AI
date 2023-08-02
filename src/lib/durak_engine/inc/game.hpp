#include <vector>

#include "cards.hpp"
#include "player.hpp"
#include "table.hpp"

namespace engine
{

    class game
    {
        public:
            game(unsigned _playerCount);
            virtual void displayDeck() = 0;     
            void update();
            cards trump;
        protected:
            table gameTable;
            unsigned turnIndex;
            unsigned playerCount;
            void deal();
            void shuffleDeck();
            std::vector<player*> players;
            std::vector<cards> deck;
    };


}