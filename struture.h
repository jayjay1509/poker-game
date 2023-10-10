#pragma once
#include <string>
#include <vector>

#include "HandValue.h"


enum Rank //here it is enum for the rank of the cards
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

enum Color //here it is enum for the color of the cards
{
	Spade,
	Club,
	Heart,
	Diamond,
};
struct Card //here we create a structure which will be the composition of the deck
{
	Rank rank;
	Color color;
};

enum Handvalue //here we define which hand has more value than the others
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

// all the functions and vectors are stored here so that it is accessible everywhere

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







