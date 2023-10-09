#pragma once
#include <string>
#include <vector>

#include "HandValue.h"


enum Rank
{
	Two = 2,
	Three = 3,
	Four = 4,
	Five = 5,
	Six = 6,
	Seven = 7,
	Eight = 8,
	Nine = 9,
	Ten = 10,
	Jack = 11,
	Queen = 12,
	king = 13,
	Ace = 14,
};

enum Color
{
	Spade,
	Club,
	Heart,
	Diamond,
};
struct Card
{
	Rank rank;
	Color color;
};

enum Handvalue
{
	HighCard,
	Pair = 100,
	TwoPair = 200,
	ThreeOfAKind = 300,
	Straight = 400,
	Flush = 500,
	Fullhouse = 600,
	Four_of_a_kind = 700,
	StraightFlush = 800,
	Royal_flush = 900,
};


int Evaluate(const std::vector<Card>& _hand);
void Game();
void TimerStarGame();
void StarGame();
void Blend();
Card DrawCard();
void DisplayCards(std::vector<Card> _deck);

int substract(int c, int d);
void displayPlayerCard();

extern std::vector<Card> handPlayer;
extern std::vector<Card> handBot;
extern std::vector<Card> handTable;
extern std::vector<Card> DeckCard;
extern std::vector<Card> _handcalcul;
extern std::vector<Card> flop;
extern std::vector<Card> turn;
extern std::vector<Card> river;

int HasHighCard(const std::vector<Card>& _handcalcul);
bool HasPair(const std::vector<Card>& _handcalcul);
bool HasTwoPair(const std::vector<Card>& _handcalcul);
bool HasThreeOfAKind(const std::vector<Card>& _handcalcul);
bool HasStraight(const std::vector<Card>& _handcalcul);
bool HasFlush(const std::vector<Card>& _handcalcul);
bool HasFullhouse(const std::vector<Card>& _handcalcul);
bool HasFour_of_a_kind(const std::vector<Card>& _handcalcul);
bool HasStraightFlush(const std::vector<Card>& _handcalcul);
bool HasRoyal_flush(const std::vector<Card>& _handcalcul);





