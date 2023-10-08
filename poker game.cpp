

#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
#include <print>
#include <thread>

#include "struture.h"
 std::vector<Card> handPlayer;
 std::vector<Card> handBot;
 std::vector<Card> handTable;
 std::vector<Card> DeckCard;
 std::vector<Card> _handcalcul;


 void testCard()
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
		 return "two";
		 break;
	 case Three:
		 return "three";
		 break;
	 case Four:
		 return "four";
		 break;
	 case Five:
		 return "five";
		 break;
	 case Six:
		 return "six";
		 break;
	 case Seven:
		 return "seven";
		 break;
	 case Eight:
		 return "eight";
		 break;
	 case Nine:
		 return "nine";
		 break;
	 case Ten:
		 return "Ten";
		 break;
	 case Jack:
		 return "Jack";
		 break;
	 case Queen:
		 return "Queen";
		 break;
	 case king:
		 return "King";
		 break;
	 case Ace:
		 return "Ace";
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
		 return "spade";
		 break;
	 case Club:
		 return "club";
		 break;
	 case Heart:
		 return "heart";
		 break;
	 case Diamond:
		 return "diamond";
		 break;
	 default:;
		 return "mec ta encore foire";
	 }
 }
 std::string cardtostring(Card _card)
 {
	 return RankString(_card.rank) + " of " + ColorString(_card.color);
 }
 void DisplayCards(std::vector<Card> _deck)
 {
	 for (const Card& card : _deck)
	 {
		 std::cout << cardtostring(card) << "\n";
	 }
 }




int main()
{
	//testCard();
	Blend();
	//StarGame();

	for (int i = 0; i < 2; i++)
	{
	 handPlayer.push_back(DrawCard()) ;
	}
	for (int i = 0; i < 5; i++)
	{
		handTable.push_back(DrawCard());
	}

	for (int i = 0; i < 2; i++)
	{

		handBot.push_back(DrawCard());
	}

	
	std::cout << "---------------------carte du bot ----------------------------------------------------\n";
	DisplayCards(handBot);
	std::cout << "---------------------carte du joueur----------------------------------------------------\n";
	DisplayCards(handPlayer);
	std::cout << "---------------------carte plateau-------------------------------------------------\n";
	DisplayCards(handTable);
	std::cout << "----------------------------------------------<\n";
	std::cout << "nombre de carte dans le deck : " << DeckCard.size() << "\n";
	std::cout << "nombre de carte du bot : " << handBot.size() << "\n";
	std::cout << "nombre de carte du joueur : " << handPlayer.size() << "\n";
	std::cout << "nombre de carte pour la table : " << handTable.size() << "\n";
	//TimerStarGame();


	 int playerValue = Evaluate(handPlayer);
	 int BotValue = Evaluate(handBot);

	if (playerValue < BotValue)
	{
		std::cout << "le bot gange avec "<< BotValue <<"\n";
	}
	else if  (BotValue < playerValue)
	{
		std::cout << " le joueuur gagne avec " << playerValue << "\n";
	}
	else if (playerValue == BotValue)
	{
		std::cout << " egaliter avec " << playerValue << "\n";
	}
	else
	{
		std::cout << " aucun gagnaint \n";
	}
	

}





