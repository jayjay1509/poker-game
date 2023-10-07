

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
 

 std::string RankString(Rank _rank)
 {
	 switch (_rank)
	 {
	 case two:
		 return "two";
		 break;
	 case three:
		 return "three";
		 break;
	 case four:
		 return "four";
		 break;
	 case five:
		 return "five";
		 break;
	 case six:
		 return "six";
		 break;
	 case seven:
		 return "seven";
		 break;
	 case eight:
		 return "eight";
		 break;
	 case nine:
		 return "nine";
		 break;
	 case ten:
		 return "ten";
		 break;
	 case jack:
		 return "jack";
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
	 case spade:
		 return "spade";
		 break;
	 case club:
		 return "club";
		 break;
	 case heart:
		 return "heart";
		 break;
	 case diamond:
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
	Blend();
	//StarGame();

	for (int i = 0; i < 2; i++)
	{
	 handPlayer.push_back(DrawCard()) ;
	}

	for (int i = 0; i < 2; i++)
	{

		handBot.push_back(DrawCard());
	}

	for (int i = 0; i < 5; i++)
	{
		handTable.push_back(DrawCard());
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
	TimerStarGame();


	const Handvalue playerValue = Evaluate(handPlayer);
	const Handvalue BotValue = Evaluate(handBot);



}





