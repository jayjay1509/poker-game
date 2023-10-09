#include "struture.h"

#include <algorithm>
#include <iostream>
#include <map>
#include <thread>
#include <vector>

#include "HandValue.h"



void TimerStarGame()
{
	//h ttps://stackoverflow.com/questions/158585/how-do-you-add-a-timed-delay-to-a-c-program
	using namespace std::this_thread;     // sleep_for, sleep_until
	using namespace std::chrono_literals; // ns, us, ms, s, h, etc.
	using std::chrono::system_clock;

	sleep_for(10ns);
	sleep_until(system_clock::now() + 2s);
}

void StarGame()
{
	printf("                     /$$                              \n");
	printf("                    | $$                              \n");
	printf("  /$$$$$$   /$$$$$$ | $$   /$$  /$$$$$$   /$$$$$$     \n");
	printf(" /$$__  $$ /$$__  $$| $$  /$$/ /$$__  $$ /$$__  $$    \n");
	printf("| $$  \  $$| $$  \  $$| $$$$$$/ | $$$$$$$$| $$  \ __/    \n");
	printf("| $$  | $$| $$  | $$| $$_  $$ | $$_____/| $$          \n");
	printf("| $$$$$$$/|  $$$$$$/| $$ \   $$|  $$$$$$$| $$          \n");
	printf("| $$____/  \ ______/ |__/  \ __/ \ _______/|__/          \n");
	printf("| $$                                                  \n");
	printf("| $$                                                  \n");
	printf("|__/                                                  \n");
	printf("                                                   /$$\n");
	printf("                                                  | $$\n");
	printf("  /$$$$$$   /$$$$$$  /$$$$$$/$$$$   /$$$$$$       | $$\n");
	printf(" /$$__  $$ |____  $$| $$_  $$_  $$ /$$__  $$      | $$\n");
	printf("| $$  \ $$  /$$$$$$$$| $$   $$   $$| $$$$$$$$      |__/\n");
	printf("| $$  | $$ /$$__  $$| $$ | $$ | $$| $$_____/          \n");
	printf("|  $$$$$$$|  $$$$$$$| $$ | $$ | $$|  $$$$$$$       /$$\n");
	printf(" \ ____  $$ \ _______/|__/ |__/ |__/ \ _______/      |__/\n");
	printf(" /$$  \ $$                                            \n");
	printf("|  $$$$$$/                                            \n");
	printf("  \______/                                             \n");
	TimerStarGame();
	TimerStarGame();
	TimerStarGame();
	TimerStarGame();
	system("cls");
	char firstChoise;
	char SecondChoise;
	std::cout << "Bonjours,\n ";
	TimerStarGame();
	system("cls");
	std::cout << "Est tu pret a joue pour ta vie ?\n";
	TimerStarGame();
	system("cls");
	std::cout << "A mais tu sais plus parle?\n";
	TimerStarGame();
	TimerStarGame();
	system("cls");
	std::cout << "Essai de  tape [y] si tu te sens de releve le defi sinon tape [n] pour nous tue \n ";
	std::cin >> firstChoise;
	system("cls");
	if (firstChoise == 'y')
	{
		std::cout << "Top bon tu te souvient des regle du poker ?  [y]/[n]\n";
		std::cin >> SecondChoise;
		system("cls");
		if (SecondChoise == 'y')
		{
			std::cout << "trop bien alors c'est partie ";
			TimerStarGame();
			system("cls");
		}
		else
		{
			std::cout << "But du jeu : Le but du poker est de gagner des jetons (ou de l'argent) des autres joueurs en ayant la meilleure main de cartes à la fin de la partie." << std::endl;
			std::cout << "Déroulement d'une partie :" << std::endl;
			std::cout << "1. Distribution des cartes : Chaque joueur reçoit deux cartes privées, connues sous le nom de 'cartes fermées'. Ensuite, cinq cartes communes sont placées au centre de la table, face visible." << std::endl;
			std::cout << "2. Les tours de mise :" << std::endl;
			std::cout << "   - Tour de mise préliminaire (Pre-flop) : Les joueurs regardent leurs deux cartes fermées et décident s'ils veulent miser, suivre (parier le même montant que le joueur précédent), relancer (augmenter la mise) ou se coucher (abandonner la main). Le joueur à gauche du donneur commence." << std::endl;
			std::cout << "   - Flop : Trois des cinq cartes communes sont retournées face visible sur la table. Un nouveau tour de mise commence." << std::endl;
			std::cout << "   - Turn : Une quatrième carte commune est retournée face visible. Un autre tour de mise a lieu." << std::endl;
			std::cout << "   - River : La cinquième et dernière carte commune est retournée face visible. Il y a un dernier tour de mise." << std::endl;
			std::cout << "3. Abattage (Showdown) : Si plus d'un joueur est encore en jeu après le dernier tour de mise, ils révèlent leurs cartes fermées et la meilleure main est déterminée. La main gagnante est celle qui a la meilleure combinaison de cinq cartes, en utilisant les deux cartes fermées du joueur et les cinq cartes communes." << std::endl;
			std::cout << "Les mains de poker : Les mains de poker sont classées du plus faible au plus fort. Voici les principales combinaisons, de la plus faible à la plus forte :" << std::endl;
			std::cout << "1. Haute carte (High Card) : Aucune combinaison, la main est évaluée en fonction de la carte la plus élevée." << std::endl;
			std::cout << "2. Paire (One Pair) : Deux cartes de même rang." << std::endl;
			std::cout << "3. Double paire (Two Pair) : Deux paires de cartes de même rang." << std::endl;
			std::cout << "4. Brelan (Three of a Kind) : Trois cartes de même rang." << std::endl;
			std::cout << "5. Suite (Straight) : Cinq cartes consécutives de différentes couleurs." << std::endl;
			std::cout << "6. Couleur (Flush) : Cinq cartes de la même couleur (n'importe quel ordre)." << std::endl;
			std::cout << "7. Full (Full House) : Une paire + un brelan." << std::endl;
			std::cout << "8. Carré (Four of a Kind) : Quatre cartes de même rang." << std::endl;
			std::cout << "9. Quinte flush (Straight Flush) : Cinq cartes consécutives de la même couleur." << std::endl;
			std::cout << "10. Quinte flush royale (Royal Flush) : La quinte flush la plus élevée, de 10 à l'as de la même couleur." << std::endl;
			std::cout << "Annoncer le gagnant : Le joueur avec la meilleure main remporte le pot, c'est-à-dire l'argent misé par tous les joueurs. Si deux joueurs ont la même main, le pot est partagé." << std::endl;
		}
	}
	else
	{
		exit(0);
	}
}
Card DrawCard()
{
	Card returncard;
	returncard = DeckCard.at(0);
	DeckCard.erase(DeckCard.begin());
	return returncard;
}

void Blend()
{

	for (int i = 2; i < 15; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			Card card;
			card.rank = Rank(i);
			card.color = Color(j);
			DeckCard.push_back(card);
		}
	}
	std::srand(std::time(0));
	std::random_shuffle(DeckCard.begin(), DeckCard.end());
}



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

std::map<Rank,int> RankOccurence(const std::vector<Card>& _handcalcul)
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
		if(c.second == 2)
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

int substract(int c, int d)

{
	return(c - d);

}
