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

int substract(int c, int d)

{
	return(c - d);

}

void testCard() // fonction qui permets de cree des carte pour les test 
{
	// Définition de neuf cartes spécifiques
	Card card1 = { Ace, Club };
	Card card2 = { king, Club };
	Card card3 = { Queen, Club };
	Card card4 = { Jack, Club };
	Card card5 = { Ten, Club };
	Card card6 = { Nine, Diamond };
	Card card7 = { Six, Club };
	Card card8 = { Six, Spade };
	Card card9 = { Six, Heart };

	// Ajout des cartes au vecteur testCards
	DeckCard.push_back(card1);
	DeckCard.push_back(card2);
	DeckCard.push_back(card3);
	DeckCard.push_back(card4);
	DeckCard.push_back(card5);
	DeckCard.push_back(card6);
	DeckCard.push_back(card7);
	DeckCard.push_back(card8);
	DeckCard.push_back(card9);

}


std::string RankString(Rank _rank)
{
	switch (_rank)
	{
	case Two:
		return "Deux";
		break;
	case Three:
		return "Trois";
		break;
	case Four:
		return "quatre ";
		break;
	case Five:
		return "cinq ";
		break;
	case Six:
		return "six ";
		break;
	case Seven:
		return "sept";
		break;
	case Eight:
		return "Huit";
		break;
	case Nine:
		return "Neuf";
		break;
	case Ten:
		return "Dix";
		break;
	case Jack:
		return "Valet";
		break;
	case Queen:
		return "Dame";
		break;
	case king:
		return "Roi";
		break;
	case Ace:
		return "As";
		break;
	default:
		return "mec ta foire";
	}
}
std::string ColorString(Color _Color)
{
	switch (_Color)
	{
	case Spade:
		return "Pique";
		break;
	case Club:
		return "Trefle";
		break;
	case Heart:
		return "Coeur";
		break;
	case Diamond:
		return "Carreau";
		break;
	default:;
		return "mec ta encore foire";
	}
}
std::string cardtostring(Card _card)
{
	return RankString(_card.rank) + " de " + ColorString(_card.color);
}
void DisplayCards(std::vector<Card> _deck)
{
	for (const Card& card : _deck)
	{
		std::cout << cardtostring(card) << "\n";
	}
}