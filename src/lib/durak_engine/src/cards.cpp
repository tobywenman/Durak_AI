#include "cards.hpp"

#include <bit>

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