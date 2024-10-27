#include "cards.hpp"

class player_t
{
    public:
        player_t(unsigned _id);

        void giveCard(card_t card);
        void pickUp(hand_t pickups);

        enum class state_t
        {
            attack,
            sideline,
            waiting,
            firstDefend,
            secondDefend,
        };
        
    private:



        unsigned id;
        hand_t hand;
        state_t state;
};