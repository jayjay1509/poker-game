#pragma once
#include <string>
#include <vector>


enum Rank
{
	two = 2,
	three = 3,
	four = 4,
	five = 5,
	six = 6,
	seven = 7,
	eight = 8,
	nine = 9,
	ten = 10,
	jack = 11,
	Queen = 12,
	king = 13,
	Ace = 14,
};

enum Color
{
	spade,
	club,
	heart,
	diamond,
};
struct Card
{
	Rank rank;
	Color color;
};

void TimerStarGame();
void StarGame();
void Blend();
Card DrawCard();

extern std::vector<Card> handPlayer;
extern std::vector<Card> handBot;
extern std::vector<Card> handTable;
extern std::vector<Card> DeckCard;