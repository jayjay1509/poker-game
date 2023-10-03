#include "struture.h"

#include <algorithm>
#include <iostream>
#include <thread>
#include <vector>

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

void Blend()
{
	struct Card
	{
		Rank rank;
		Color color;
	};

	std::vector<Card> DeckCard;
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

	//for (const Card& card : DeckCard)
	//{
	//	std::cout << "Rank: " << card.rank << ", Color: " << card.color << std::endl;
	//}
	//std::cout << "----------------------------------------------<\n";

	std::random_shuffle(DeckCard.begin(), DeckCard.end());


	//for (const Card& card : DeckCard)
	//{
	//	std::cout << "Rank: " << card.rank << ", Color: " << card.color << std::endl;
	//}

	std::vector<Card> handPlayer;
	std::vector<Card> handBot;
	std::vector<Card> handTable;

	for (int i = 0; i < 2; i++)
	{

		handPlayer.push_back(DeckCard.at(0));
		DeckCard.erase(DeckCard.begin());
	}
	//std::cout << "----------------------------------------------<\n";
	//for (const Card& card : handPlayer)
	//{
	//	std::cout << "Rank: " << card.rank << ", Color: " << card.color << std::endl;
	//}
	//std::cout << "----------------------------------------------<\n";
	for (int i = 0; i < 2; i++)
	{

		handBot.push_back(DeckCard.at(0));
		DeckCard.erase(DeckCard.begin());
	}

	//for (const Card& card : handBot)
	//{
	//	std::cout << "Rank: " << card.rank << ", Color: " << card.color << std::endl;
	//}
	//std::cout << "----------------------------------------------<\n";

	for (int i = 0; i < 5; i++)
	{

		handTable.push_back(DeckCard.at(0));
		DeckCard.erase(DeckCard.begin());
	}
	std::cout << "nombre de carte dans le deck : " << DeckCard.size() << "\n";
	std::cout << "nombre de carte du bot : " << handBot.size() << "\n";
	std::cout << "nombre de carte du joueur : " << handPlayer.size() << "\n";
	std::cout << "nombre de carte pour la table : " << handTable.size() << "\n";
	TimerStarGame();
}