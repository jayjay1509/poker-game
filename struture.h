#pragma once
#include <string>


struct Card
{
	std::string suits;
	std::string ranks;
};

void TimerStarGame();
void StarGame();
void Blend();



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
	eleven = 11,
	twelve = 12,
	thirteen = 13,
	fourteen = 14,
};

enum Color
{
	spade,
	club,
	heart,
	diamond,
};