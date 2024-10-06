#pragma once

#include <cstdint>
#include <iostream>
#include <exception>
#include <random>

enum class card_t : std::uint64_t
{
    HeartsAce     = 0b1000000000000000000000000000000000000000000000000000,
    Hearts2       = 0b0100000000000000000000000000000000000000000000000000,
    Hearts3       = 0b0010000000000000000000000000000000000000000000000000,
    Hearts4       = 0b0001000000000000000000000000000000000000000000000000,
    Hearts5       = 0b0000100000000000000000000000000000000000000000000000,
    Hearts6       = 0b0000010000000000000000000000000000000000000000000000,
    Hearts7       = 0b0000001000000000000000000000000000000000000000000000,
    Hearts8       = 0b0000000100000000000000000000000000000000000000000000,
    Hearts9       = 0b0000000010000000000000000000000000000000000000000000,
    Hearts10      = 0b0000000001000000000000000000000000000000000000000000,
    HeartsJack    = 0b0000000000100000000000000000000000000000000000000000,
    HeartsQueen   = 0b0000000000010000000000000000000000000000000000000000,
    HeartsKing    = 0b0000000000001000000000000000000000000000000000000000,
    DiamondsAce   = 0b0000000000000100000000000000000000000000000000000000,
    Diamonds2     = 0b0000000000000010000000000000000000000000000000000000,
    Diamonds3     = 0b0000000000000001000000000000000000000000000000000000,
    Diamonds4     = 0b0000000000000000100000000000000000000000000000000000,
    Diamonds5     = 0b0000000000000000010000000000000000000000000000000000,
    Diamonds6     = 0b0000000000000000001000000000000000000000000000000000,
    Diamonds7     = 0b0000000000000000000100000000000000000000000000000000,
    Diamonds8     = 0b0000000000000000000010000000000000000000000000000000,
    Diamonds9     = 0b0000000000000000000001000000000000000000000000000000,
    Diamonds10    = 0b0000000000000000000000100000000000000000000000000000,
    DiamondsJack  = 0b0000000000000000000000010000000000000000000000000000,
    DiamondsQueen = 0b0000000000000000000000001000000000000000000000000000,
    DiamondsKing  = 0b0000000000000000000000000100000000000000000000000000,
    SpadesAce     = 0b0000000000000000000000000010000000000000000000000000,
    Spades2       = 0b0000000000000000000000000001000000000000000000000000,
    Spades3       = 0b0000000000000000000000000000100000000000000000000000,
    Spades4       = 0b0000000000000000000000000000010000000000000000000000,
    Spades5       = 0b0000000000000000000000000000001000000000000000000000,
    Spades6       = 0b0000000000000000000000000000000100000000000000000000,
    Spades7       = 0b0000000000000000000000000000000010000000000000000000,
    Spades8       = 0b0000000000000000000000000000000001000000000000000000,
    Spades9       = 0b0000000000000000000000000000000000100000000000000000,
    Spades10      = 0b0000000000000000000000000000000000010000000000000000,
    SpadesJack    = 0b0000000000000000000000000000000000001000000000000000,
    SpadesQueen   = 0b0000000000000000000000000000000000000100000000000000,
    SpadesKing    = 0b0000000000000000000000000000000000000010000000000000,
    ClubsAce      = 0b0000000000000000000000000000000000000001000000000000,
    Clubs2        = 0b0000000000000000000000000000000000000000100000000000,
    Clubs3        = 0b0000000000000000000000000000000000000000010000000000,
    Clubs4        = 0b0000000000000000000000000000000000000000001000000000,
    Clubs5        = 0b0000000000000000000000000000000000000000000100000000,
    Clubs6        = 0b0000000000000000000000000000000000000000000010000000,
    Clubs7        = 0b0000000000000000000000000000000000000000000001000000,
    Clubs8        = 0b0000000000000000000000000000000000000000000000100000,
    Clubs9        = 0b0000000000000000000000000000000000000000000000010000,
    Clubs10       = 0b0000000000000000000000000000000000000000000000001000,
    ClubsJack     = 0b0000000000000000000000000000000000000000000000000100,
    ClubsQueen    = 0b0000000000000000000000000000000000000000000000000010,
    ClubsKing     = 0b0000000000000000000000000000000000000000000000000001
};

std::ostream& operator<<(std::ostream& os, const card_t& card);

// A bitset style container to hold a set of cards. 
// Broadly it's meant to resemble a std container
class hand_t
{
    public:
        hand_t();
        bool contains(card_t card) const;
        bool empty() const;
        void clear();
        void insert(card_t card);
        void merge(const hand_t& other);
        std::size_t size() const;
        void erase(card_t card);

        bool getNext(card_t& card) const;

        class invalidDeckException : public std::exception{};

    private:
        std::uint64_t hand;
};

class cardStack_t
{
    public:
        cardStack_t();

        void fill();
        void shuffle();

        card_t pop();

        std::uint8_t size() const;
    
    private:
        card_t cards[52];
        std::uint8_t top;

        std::default_random_engine generator;
};