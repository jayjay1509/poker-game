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
			std::cout << "But du jeu : Le but du poker est de gagner des jetons (ou de l'argent) des autres joueurs en ayant la meilleure main de cartes � la fin de la partie." << std::endl;
			std::cout << "D�roulement d'une partie :" << std::endl;
			std::cout << "1. Distribution des cartes : Chaque joueur re�oit deux cartes priv�es, connues sous le nom de 'cartes ferm�es'. Ensuite, cinq cartes communes sont plac�es au centre de la table, face visible." << std::endl;
			std::cout << "2. Les tours de mise :" << std::endl;
			std::cout << "   - Tour de mise pr�liminaire (Pre-flop) : Les joueurs regardent leurs deux cartes ferm�es et d�cident s'ils veulent miser, suivre (parier le m�me montant que le joueur pr�c�dent), relancer (augmenter la mise) ou se coucher (abandonner la main). Le joueur � gauche du donneur commence." << std::endl;
			std::cout << "   - Flop : Trois des cinq cartes communes sont retourn�es face visible sur la table. Un nouveau tour de mise commence." << std::endl;
			std::cout << "   - Turn : Une quatri�me carte commune est retourn�e face visible. Un autre tour de mise a lieu." << std::endl;
			std::cout << "   - River : La cinqui�me et derni�re carte commune est retourn�e face visible. Il y a un dernier tour de mise." << std::endl;
			std::cout << "3. Abattage (Showdown) : Si plus d'un joueur est encore en jeu apr�s le dernier tour de mise, ils r�v�lent leurs cartes ferm�es et la meilleure main est d�termin�e. La main gagnante est celle qui a la meilleure combinaison de cinq cartes, en utilisant les deux cartes ferm�es du joueur et les cinq cartes communes." << std::endl;
			std::cout << "Les mains de poker : Les mains de poker sont class�es du plus faible au plus fort. Voici les principales combinaisons, de la plus faible � la plus forte :" << std::endl;
			std::cout << "1. Haute carte (High Card) : Aucune combinaison, la main est �valu�e en fonction de la carte la plus �lev�e." << std::endl;
			std::cout << "2. Paire (One Pair) : Deux cartes de m�me rang." << std::endl;
			std::cout << "3. Double paire (Two Pair) : Deux paires de cartes de m�me rang." << std::endl;
			std::cout << "4. Brelan (Three of a Kind) : Trois cartes de m�me rang." << std::endl;
			std::cout << "5. Suite (Straight) : Cinq cartes cons�cutives de diff�rentes couleurs." << std::endl;
			std::cout << "6. Couleur (Flush) : Cinq cartes de la m�me couleur (n'importe quel ordre)." << std::endl;
			std::cout << "7. Full (Full House) : Une paire + un brelan." << std::endl;
			std::cout << "8. Carr� (Four of a Kind) : Quatre cartes de m�me rang." << std::endl;
			std::cout << "9. Quinte flush (Straight Flush) : Cinq cartes cons�cutives de la m�me couleur." << std::endl;
			std::cout << "10. Quinte flush royale (Royal Flush) : La quinte flush la plus �lev�e, de 10 � l'as de la m�me couleur." << std::endl;
			std::cout << "Annoncer le gagnant : Le joueur avec la meilleure main remporte le pot, c'est-�-dire l'argent mis� par tous les joueurs. Si deux joueurs ont la m�me main, le pot est partag�." << std::endl;
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