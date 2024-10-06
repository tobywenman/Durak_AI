#include "cards.hpp"

#include <bit>
#include <cstring>

std::ostream& operator<<(std::ostream& os, const card_t& card)
{
    switch (card)
    {
        case card_t::HeartsAce: os << "HeartsAce"; break;
        case card_t::Hearts2: os << "Hearts2"; break;
        case card_t::Hearts3: os << "Hearts3"; break;
        case card_t::Hearts4: os << "Hearts4"; break;
        case card_t::Hearts5: os << "Hearts5"; break;
        case card_t::Hearts6: os << "Hearts6"; break;
        case card_t::Hearts7: os << "Hearts7"; break;
        case card_t::Hearts8: os << "Hearts8"; break;
        case card_t::Hearts9: os << "Hearts9"; break;
        case card_t::Hearts10: os << "Hearts10"; break;
        case card_t::HeartsJack: os << "HeartsJack"; break;
        case card_t::HeartsQueen: os << "HeartsQueen"; break;
        case card_t::HeartsKing: os << "HeartsKing"; break;
        case card_t::DiamondsAce: os << "DiamondsAce"; break;
        case card_t::Diamonds2: os << "Diamonds2"; break;
        case card_t::Diamonds3: os << "Diamonds3"; break;
        case card_t::Diamonds4: os << "Diamonds4"; break;
        case card_t::Diamonds5: os << "Diamonds5"; break;
        case card_t::Diamonds6: os << "Diamonds6"; break;
        case card_t::Diamonds7: os << "Diamonds7"; break;
        case card_t::Diamonds8: os << "Diamonds8"; break;
        case card_t::Diamonds9: os << "Diamonds9"; break;
        case card_t::Diamonds10: os << "Diamonds10"; break;
        case card_t::DiamondsJack: os << "DiamondsJack"; break;
        case card_t::DiamondsQueen: os << "DiamondsQueen"; break;
        case card_t::DiamondsKing: os << "DiamondsKing"; break;
        case card_t::SpadesAce: os << "SpadesAce"; break;
        case card_t::Spades2: os << "Spades2"; break;
        case card_t::Spades3: os << "Spades3"; break;
        case card_t::Spades4: os << "Spades4"; break;
        case card_t::Spades5: os << "Spades5"; break;
        case card_t::Spades6: os << "Spades6"; break;
        case card_t::Spades7: os << "Spades7"; break;
        case card_t::Spades8: os << "Spades8"; break;
        case card_t::Spades9: os << "Spades9"; break;
        case card_t::Spades10: os << "Spades10"; break;
        case card_t::SpadesJack: os << "SpadesJack"; break;
        case card_t::SpadesQueen: os << "SpadesQueen"; break;
        case card_t::SpadesKing: os << "SpadesKing"; break;
        case card_t::ClubsAce: os << "ClubsAce"; break;
        case card_t::Clubs2: os << "Clubs2"; break;
        case card_t::Clubs3: os << "Clubs3"; break;
        case card_t::Clubs4: os << "Clubs4"; break;
        case card_t::Clubs5: os << "Clubs5"; break;
        case card_t::Clubs6: os << "Clubs6"; break;
        case card_t::Clubs7: os << "Clubs7"; break;
        case card_t::Clubs8: os << "Clubs8"; break;
        case card_t::Clubs9: os << "Clubs9"; break;
        case card_t::Clubs10: os << "Clubs10"; break;
        case card_t::ClubsJack: os << "ClubsJack"; break;
        case card_t::ClubsQueen: os << "ClubsQueen"; break;
        case card_t::ClubsKing: os << "ClubsKing"; break;     
        default:
            os << "invalid card"; break;
    }

    return os;
}

std::uint8_t getCardValue(card_t card)
{
     switch (card)
    {
        case card_t::HeartsAce: return 14;
        case card_t::Hearts2: return 2;
        case card_t::Hearts3: return 3;
        case card_t::Hearts4: return 4;
        case card_t::Hearts5: return 5;
        case card_t::Hearts6: return 6;
        case card_t::Hearts7: return 7;
        case card_t::Hearts8: return 8;
        case card_t::Hearts9: return 9;
        case card_t::Hearts10: return 10;
        case card_t::HeartsJack: return 11;
        case card_t::HeartsQueen: return 12;
        case card_t::HeartsKing: return 13;
        case card_t::DiamondsAce: return 14;
        case card_t::Diamonds2: return 2;
        case card_t::Diamonds3: return 3;
        case card_t::Diamonds4: return 4;
        case card_t::Diamonds5: return 5;
        case card_t::Diamonds6: return 6;
        case card_t::Diamonds7: return 7;
        case card_t::Diamonds8: return 8;
        case card_t::Diamonds9: return 9;
        case card_t::Diamonds10: return 10;
        case card_t::DiamondsJack: return 11;
        case card_t::DiamondsQueen: return 12;
        case card_t::DiamondsKing: return 13;
        case card_t::SpadesAce: return 14;
        case card_t::Spades2: return 2;
        case card_t::Spades3: return 3;
        case card_t::Spades4: return 4;
        case card_t::Spades5: return 5;
        case card_t::Spades6: return 6;
        case card_t::Spades7: return 7;
        case card_t::Spades8: return 8;
        case card_t::Spades9: return 9;
        case card_t::Spades10: return 10;
        case card_t::SpadesJack: return 11;
        case card_t::SpadesQueen: return 12;
        case card_t::SpadesKing: return 13;
        case card_t::ClubsAce: return 14;
        case card_t::Clubs2: return 2;
        case card_t::Clubs3: return 3;
        case card_t::Clubs4: return 4;
        case card_t::Clubs5: return 5;
        case card_t::Clubs6: return 6;
        case card_t::Clubs7: return 7;
        case card_t::Clubs8: return 8;
        case card_t::Clubs9: return 9;
        case card_t::Clubs10: return 10;
        case card_t::ClubsJack: return 11;
        case card_t::ClubsQueen: return 12;
        case card_t::ClubsKing: return 13;     
        default:
            throw std::runtime_error("");
    }
}


suit_t getSuit(card_t card)
{
    std::uint64_t cardInt = static_cast<std::uint64_t>(card);
    if (cardInt <= 0b1000000000000000000000000000000000000000000000000000 &&
        cardInt >= 0b0000000000001000000000000000000000000000000000000000)
    {
        return suit_t::hearts;
    }
    if (cardInt <= 0b0000000000000100000000000000000000000000000000000000 &&
    cardInt >= 0b0000000000000000000000000100000000000000000000000000)
    {
        return suit_t::diamonds;
    }
    if (cardInt <= 0b0000000000000000000000000010000000000000000000000000 &&
    cardInt >= 0b0000000000000000000000000000000000000010000000000000)
    {
        return suit_t::spades;
    }
    if (cardInt <= 0b0000000000000000000000000000000000000001000000000000 &&
    cardInt >= 0b0000000000000000000000000000000000000000000000000001)
    {
        return suit_t::clubs;
    }
    throw std::runtime_error("");
}

hand_t::hand_t() : hand(0){}

bool hand_t::contains(card_t card) const
{
    return hand & static_cast<std::uint64_t>(card);
}

bool hand_t::empty() const
{
    return !(hand);
}

void hand_t::clear()
{
    hand = 0;
}

void hand_t::insert(card_t card)
{
    if (contains(card))
    {
        throw invalidDeckException();
    }

    hand |= static_cast<std::uint64_t>(card);
}

void hand_t::merge(const hand_t& other)
{
    if (hand & other.hand)
    {
        throw invalidDeckException();
    }

    hand |= other.hand;
}

std::size_t hand_t::size() const
{
    return std::popcount(hand);
}

void hand_t::erase(card_t card)
{
    if (!contains(card))
    {
        throw invalidDeckException();
    }

    std::uint64_t mask = ~static_cast<std::uint64_t>(card);

    hand &= mask;
}

bool hand_t::getNext(card_t& card) const
{
    if (empty())
    {
        return false;
    }

    std::uint64_t nextCard = hand & -hand;
    card = static_cast<card_t>(nextCard);

    return true;
}

bool hand_t::containsValue(std::uint8_t value) const
{
    std::uint64_t mask = 0;

    switch (value)
    {
    case 2:  mask = 0b0100000000000010000000000001000000000000100000000000; break;
    case 3:  mask = 0b0010000000000001000000000000100000000000010000000000; break;
    case 4:  mask = 0b0001000000000000100000000000010000000000001000000000; break;
    case 5:  mask = 0b0000100000000000010000000000001000000000000100000000; break;
    case 6:  mask = 0b0000010000000000001000000000000100000000000010000000; break;
    case 7:  mask = 0b0000001000000000000100000000000010000000000001000000; break;
    case 8:  mask = 0b0000000100000000000010000000000001000000000000100000; break;
    case 9:  mask = 0b0000000010000000000001000000000000100000000000010000; break;
    case 10: mask = 0b0000000001000000000000100000000000010000000000001000; break;
    case 11: mask = 0b0000000000100000000000010000000000001000000000000100; break;
    case 12: mask = 0b0000000000010000000000001000000000000100000000000010; break;
    case 13: mask = 0b0000000000001000000000000100000000000010000000000001; break;
    case 14: mask = 0b1000000000000100000000000010000000000001000000000001; break;
    default: throw std::runtime_error("invalid card value");
    }

    return hand & mask;
}

cardStack_t::cardStack_t() : top(0){}

void cardStack_t::fill()
{
    top = 52;

    for (unsigned i=0; i<top; i++)
    {
        std::uint64_t card = 1;
        card <<= i;
        cards[i] = static_cast<card_t>(card);
    }
}

void cardStack_t::shuffle()
{
    for (std::uint8_t i=0; i<top-1; i++)
    {
        std::uniform_int_distribution<std::uint8_t> dist(i, top-1);

        std::uint8_t j = dist(generator);

        std::swap(cards[i], cards[j]);
    }
}

card_t cardStack_t::pop()
{
    if (top == 0)
    {
        throw std::length_error("");
    }
    --top;
    return cards[top];
}

std::uint8_t cardStack_t::size() const
{
    return top;
}

void cardStack_t::pushBack(card_t card)
{
    std::memmove(&cards[1], &cards[0], sizeof(card_t)*size());
    ++top;
    cards[0] = card;
}
