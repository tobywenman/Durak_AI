#include "cardPrint.hpp"

#include <stdexcept>

std::string get_card_name(engine::cards card)
{
    switch (card)
    {
        case engine::cards::HeartsAce: return "HeartsAce";
        case engine::cards::Hearts2: return "Hearts2";
        case engine::cards::Hearts3: return "Hearts3";
        case engine::cards::Hearts4: return "Hearts4";
        case engine::cards::Hearts5: return "Hearts5";
        case engine::cards::Hearts6: return "Hearts6";
        case engine::cards::Hearts7: return "Hearts7";
        case engine::cards::Hearts8: return "Hearts8";
        case engine::cards::Hearts9: return "Hearts9";
        case engine::cards::Hearts10: return "Hearts10";
        case engine::cards::HeartsJack: return "HeartsJack";
        case engine::cards::HeartsQueen: return "HeartsQueen";
        case engine::cards::HeartsKing: return "HeartsKing";

        case engine::cards::DiamondsAce: return "DiamondsAce";
        case engine::cards::Diamonds2: return "Diamonds2";
        case engine::cards::Diamonds3: return "Diamonds3";
        case engine::cards::Diamonds4: return "Diamonds4";
        case engine::cards::Diamonds5: return "Diamonds5";
        case engine::cards::Diamonds6: return "Diamonds6";
        case engine::cards::Diamonds7: return "Diamonds7";
        case engine::cards::Diamonds8: return "Diamonds8";
        case engine::cards::Diamonds9: return "Diamonds9";
        case engine::cards::Diamonds10: return "Diamonds10";
        case engine::cards::DiamondsJack: return "DiamondsJack";
        case engine::cards::DiamondsQueen: return "DiamondsQueen";
        case engine::cards::DiamondsKing: return "DiamondsKing";

        case engine::cards::SpadesAce: return "SpadesAce";
        case engine::cards::Spades2: return "Spades2";
        case engine::cards::Spades3: return "Spades3";
        case engine::cards::Spades4: return "Spades4";
        case engine::cards::Spades5: return "Spades5";
        case engine::cards::Spades6: return "Spades6";
        case engine::cards::Spades7: return "Spades7";
        case engine::cards::Spades8: return "Spades8";
        case engine::cards::Spades9: return "Spades9";
        case engine::cards::Spades10: return "Spades10";
        case engine::cards::SpadesJack: return "SpadesJack";
        case engine::cards::SpadesQueen: return "SpadesQueen";
        case engine::cards::SpadesKing: return "SpadesKing";

        case engine::cards::ClubsAce: return "ClubsAce";
        case engine::cards::Clubs2: return "Clubs2";
        case engine::cards::Clubs3: return "Clubs3";
        case engine::cards::Clubs4: return "Clubs4";
        case engine::cards::Clubs5: return "Clubs5";
        case engine::cards::Clubs6: return "Clubs6";
        case engine::cards::Clubs7: return "Clubs7";
        case engine::cards::Clubs8: return "Clubs8";
        case engine::cards::Clubs9: return "Clubs9";
        case engine::cards::Clubs10: return "Clubs10";
        case engine::cards::ClubsJack: return "ClubsJack";
        case engine::cards::ClubsQueen: return "ClubsQueen";
        case engine::cards::ClubsKing: return "ClubsKing";
        default: throw std::invalid_argument("invalid card");
    }
}