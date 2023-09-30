

#include <algorithm>
#include <iostream>
#include <vector>
#include <print>



int main()
{
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

	

	std::cout << "nombre de carte dans le deck : " << DeckCard.size() <<"\n" ;
	std::cout << "nombre de carte du bot : " << handBot.size() << "\n";
	std::cout << "nombre de carte du joueur : " << handPlayer.size() << "\n";
	std::cout << "nombre de carte pour la table : " << handTable.size() << "\n";




	
}

