#include "player.hpp"

class cliPlayer : public engine::player
{
    public:
        using engine::player::player;
        void getMove() override;
        void getAttack() override;
        void showHand();
    private:
        
};