#include <algorithm>
#include <vector>

#include "struture.h"

int Evaluate(const std::vector<Card>& _hand)
{
	std::vector<Card> _handcalcul;

	for (auto n : _hand)
	{
		_handcalcul.emplace_back(n);
	}
	for (auto c : handTable)
	{
		_handcalcul.emplace_back(c);
	}
	HasHighCard(_handcalcul);
	HasPair(_handcalcul);
	HasTwoPair(_handcalcul);
	HasStraight(_handcalcul);
	HasFlush(_handcalcul);
	HasFullhouse(_handcalcul);
	HasThreeOfAKind(_handcalcul);
	HasStraightFlush(_handcalcul);
	HasRoyal_flush(_handcalcul);

	if (HasRoyal_flush(_handcalcul))
	{
		return Royal_flush;
	}
	else if (HasStraightFlush(_handcalcul))
	{
		return StraightFlush;
	}

	else if (HasFullhouse(_handcalcul))
	{
		return Fullhouse;
	}

	else if (HasFlush(_handcalcul))
	{
		return Flush;
	}

	else if (HasStraight(_handcalcul))
	{
		return Straight;
	}
	else if (HasThreeOfAKind(_handcalcul))
	{
		return ThreeOfAKind;
	}

	else if (HasTwoPair(_handcalcul))
	{
		return TwoPair;
	}

	else if (HasPair(_handcalcul))
	{
		return Pair;
	}
	if (HasHighCard(_handcalcul))
	{
		return HasHighCard(_handcalcul);
	}
	else
	{
		return 0;
	}
}

std::map<Color, int> ColorOccurences(const std::vector<Card>& _handcalcul)
{
	std::map<enum Color, int> color_occurences;

	for (auto c : _handcalcul)
	{
		if (color_occurences.find(c.color) == color_occurences.end())
		{
			color_occurences[c.color] = 1;
		}
		else
		{
			color_occurences[c.color]++;
		}

	}
	return color_occurences;
}

std::map<Rank, int> RankOccurence(const std::vector<Card>& _handcalcul)
{
	std::map<Rank, int> rank_occurences;

	for (auto c : _handcalcul)
	{
		if (rank_occurences.find(c.rank) == rank_occurences.end())
		{
			rank_occurences[c.rank] = 1;
		}
		else
		{
			rank_occurences[c.rank]++;
		}

	}
	return rank_occurences;
}

std::vector<Rank> HandStraight(const std::vector<Card>& _handcalcul)
{
	std::vector<Rank> ranks;

	for (const Card& card : _handcalcul)
	{
		ranks.push_back(card.rank);
	}

	std::sort(ranks.begin(), ranks.end());

	return ranks;
}

bool HasStraight(const std::vector<Card>& _handcalcul)
{
	std::vector<Card> occurences = _handcalcul;
	std::sort(occurences.begin(), occurences.end(),
		[](const Card& a, const Card& b) {
			return a.rank < b.rank;
		});

	int currentStreak = 1;


	for (size_t i = 0; i < occurences.size() - 1; ++i)
	{
		if (occurences[i].rank + 1 == occurences[i + 1].rank)
		{
			currentStreak++;

			if (currentStreak == 5)
			{
				return true;
			}
		}
		else if (occurences[i].rank != occurences[i + 1].rank)
		{
			currentStreak = 1;
		}
	}

	return false;
}



bool HasPair(const std::vector<Card>& _handcalcul)
{
	const std::map<Rank, int> occurences = RankOccurence(_handcalcul);
	for (auto c : occurences)
	{
		if (c.second == 2)
		{
			return true;
		}

	}
	return false;
}

int HasHighCard(const std::vector<Card>& _handcalcul)
{
	const std::map<Rank, int> occurences = RankOccurence(_handcalcul);

	Rank rangMax = Two;

	for (const auto& c : occurences)
	{
		if (c.first > rangMax)
		{
			rangMax = c.first;
		}
	}

	return rangMax;

}


bool HasTwoPair(const std::vector<Card>& _handcalcul)
{
	const std::map<Rank, int> occurences = RankOccurence(_handcalcul);
	int pairCount = 0;

	for (const auto& c : occurences)
	{
		if (c.second == 2)
		{
			pairCount++;
		}
	}
	return pairCount == 2;
}

bool HasThreeOfAKind(const std::vector<Card>& _handcalcul)
{
	const std::map<Rank, int> occurences = RankOccurence(_handcalcul);
	for (auto c : occurences)
	{
		if (c.second == 3)
		{
			return true;
		}
	}
	return false;
}


bool HasFlush(const std::vector<Card>& _handcalcul)
{
	const std::map<Color, int> occurences = ColorOccurences(_handcalcul);
	for (auto c : occurences)
	{
		if (c.second >= 5)
		{
			return true;
		}

	}
	return false;
}

bool HasFullhouse(const std::vector<Card>& _handcalcul)
{
	const std::map<Rank, int> occurences = RankOccurence(_handcalcul);
	int pairCount = 0;

	for (const auto& c : occurences)
	{
		if (c.second == 3)
		{
			for (const auto& c : occurences)
			{
				if (c.second == 2)
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool HasFour_of_a_kind(const std::vector<Card>& _handcalcul)
{
	const std::map<Rank, int> occurences = RankOccurence(_handcalcul);
	for (auto c : occurences)
	{
		if (c.second == 4)
		{
			return true;
		}
	}
	return false;
}

bool HasStraightFlush(const std::vector<Card>& _handcalcul)
{
	std::vector<Card> occurences = _handcalcul;
	std::sort(occurences.begin(), occurences.end(),
		[](const Card& a, const Card& b) {
			return a.rank < b.rank;
		});

	int currentStreak = 1;
	const std::map<Color, int> coloroccurences = ColorOccurences(_handcalcul);
	for (auto c : coloroccurences)
	{
		if (c.second >= 5)
		{
			for (size_t i = 0; i < occurences.size() - 1; ++i)
			{
				if (occurences[i].rank + 1 == occurences[i + 1].rank)
				{
					currentStreak++;

					if (currentStreak == 5)
					{
						return true;
					}
				}
				else if (occurences[i].rank != occurences[i + 1].rank)
				{
					currentStreak = 1;
				}
			}
		}

	}
	return false;
}

bool HasRoyal_flush(const std::vector<Card>& _handcalcul)
{
	std::vector<Card> occurences = _handcalcul;
	std::sort(occurences.begin(), occurences.end(),
		[](const Card& a, const Card& b) {
			return a.rank < b.rank;
		});

	int currentStreak = 1;
	const std::map<Color, int> coloroccurences = ColorOccurences(_handcalcul);
	for (auto c : coloroccurences)
	{
		if (c.second >= 5)
		{
			for (size_t i = 0; i < occurences.size() - 1; ++i)
			{
				if (occurences.back().rank == Ace)
				{


					if (occurences[i].rank + 1 == occurences[i + 1].rank)
					{
						currentStreak++;

						if (currentStreak == 5)
						{
							return true;
						}
					}
					else if (occurences[i].rank != occurences[i + 1].rank)
					{
						currentStreak = 1;
					}
				}
			}
		}

	}
	return false;
}