#include <vector>

#include "cards.hpp"
#include "player.hpp"
#include "table.hpp"

namespace engine
{

    class game
    {
        public:
            game();
            virtual void displayDeck() = 0;     
            void update();
            void deal();
            void addPlayer(player *_player);
            cards trump;
            table gameTable;
        protected:
            
            unsigned turnIndex;
            unsigned playerCount;
            bool turnInFlight;
            
            void shuffleDeck();
            std::vector<player*> players;
            std::vector<cards> deck;
    };


}