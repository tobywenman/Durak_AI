#include "player.hpp"

#include <vector>

class game_t
{
    public:
        game_t(unsigned numPlayers, unsigned _handSize);

    private:
        bool validDefense(card_t defender, card_t attacker);
        
        cardStack_t pickupPile;
        hand_t discardPile;

        // Just used to remember what they are, the card object still lives in the hand/pile
        card_t trump;
        suit_t trumpSuit;

        std::vector<player_t> players;

        unsigned handSize;

        class notEnoughCards : public std::exception{};
};