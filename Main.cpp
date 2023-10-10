

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
 std::vector<Card> flop;
 std::vector<Card> turn;
 std::vector<Card> river;

 int main()
 {
	 //testCard(); // function which allows you to create Card which are defined
	 StarGame();
	 //here money of the player and the bot and the pot
	 int moneyPlayer = 2000;
	 int moneyBot = 2000;
	 int pot = 0;


	 do
	 {
		 Blend(); //function that creates and distributes the catre for the part

		 for (int i = 0; i < 2; i++)  //function which puts the cards in the correct vector
		 {
			 handPlayer.push_back(DrawCard());
		 }
		 for (int i = 0; i < 5; i++)
		 {
			 handTable.push_back(DrawCard());
		 }

		 for (int i = 0; i < 2; i++)
		 {

			 handBot.push_back(DrawCard());
		 }

		 for (int i = 0; i < 3; i++)
		 {
			 flop.push_back(handTable[i]);

		 }
		 for (int i = 0; i < 4; i++)
		 {
			 turn.push_back(handTable[i]);
		 }
		 for (int i = 0; i < 5; i++)
		 {
			 river.push_back(handTable[i]);
		 }

		 int playerValue = Evaluate(handPlayer); //here we create the comparison values
		 int BotValue = Evaluate(handBot);
		 int toBet1;
		 int toBet2;
		 int toBet3;
		 int toBet4;

		 //here that's all that the player will see for his bet, that's all the progress of a game

		 std::cout << "Votre argent : " << moneyPlayer << "\t\t\t\t\t\t" << "argent du Bot : " << moneyBot << "\t\t\t\t\t\t" << "Argent du pot : " << pot << "\n";
		 std::cout << "---------------------carte du joueur----------------------------------------------------\n";
		 DisplayCards(handPlayer);
		 std::cout << "----------------------------------------------------------------------------------------\n";
		 do
		 {
			 std::cout << "\n\n\n Miser ton argent : ";
			 std::cin >> toBet1;
			 if (toBet1 > moneyPlayer) {
				 std::cout << "Vous n'avez pas suffisamment d'argent pour miser cela.\n";
			 }
			 else {
				 moneyPlayer -= toBet1;
				 moneyBot -= toBet1;
				 pot += (toBet1 * 2);
				 std::system("cls");
				 break;
			 }
		 }
		 while (true);
		 
		 std::cout << "Votre argent : " << moneyPlayer << "\t\t\t\t\t\t" << "argent du Bot : " << moneyBot << "\t\t\t\t\t\t" << "Argent du pot : " << pot << "\n";
		 std::cout << "---------------------carte du joueur----------------------------------------------------\n";
		 DisplayCards(handPlayer);
		 std::cout << "----------------------------------------------------------------------------------------\n";
		 std::cout << "---------------------carte du plateaux--------------------------------------------------\n";
		 DisplayCards(flop);
		 std::cout << "----------------------------------------------------------------------------------------\n";
		 do
		 {
			 std::cout << "\n\n\n Miser ton argent : ";
			 std::cin >> toBet2;
			 if (toBet2 > moneyPlayer) {
				 std::cout << "Vous n'avez pas suffisamment d'argent pour miser cela.\n";
			 }
			 else {
				 moneyPlayer -= toBet2;
				 moneyBot -= toBet2;
				 pot += (toBet2 * 2);
				 std::system("cls");
				 break;
			 }
		 } while (true);
		 std::cout << "Votre argent : " << moneyPlayer << "\t\t\t\t\t\t" << "argent du Bot : " << moneyBot << "\t\t\t\t\t\t" << "Argent du pot : " << pot << "\n";
		 std::cout << "---------------------carte du joueur----------------------------------------------------\n";
		 DisplayCards(handPlayer);
		 std::cout << "----------------------------------------------------------------------------------------\n";
		 std::cout << "---------------------carte du plateaux--------------------------------------------------\n";
		 DisplayCards(turn);
		 std::cout << "----------------------------------------------------------------------------------------\n";
		 do
		 {
			 std::cout << "\n\n\n Miser ton argent : ";
			 std::cin >> toBet3;
			 if (toBet3 > moneyPlayer) {
				 std::cout << "Vous n'avez pas suffisamment d'argent pour miser cela.\n";
			 }
			 else {
				 moneyPlayer -= toBet3;
				 moneyBot -= toBet3;
				 pot += (toBet3 * 2);
				 std::system("cls");
				 break;
			 }
		 } while (true);
		 std::cout << "Votre argent : " << moneyPlayer << "\t\t\t\t\t\t" << "argent du Bot : " << moneyBot << "\t\t\t\t\t\t" << "Argent du pot : " << pot << "\n";
		 std::cout << "---------------------carte du joueur----------------------------------------------------\n";
		 DisplayCards(handPlayer);
		 std::cout << "----------------------------------------------------------------------------------------\n";
		 std::cout << "---------------------carte du plateaux--------------------------------------------------\n";
		 DisplayCards(river);
		 std::cout << "----------------------------------------------------------------------------------------\n";
		 do
		 {
			 std::cout << "\n\n\n Miser ton argent : ";
			 std::cin >> toBet4;
			 if (toBet4 > moneyPlayer) {
				 std::cout << "Vous n'avez pas suffisamment d'argent pour miser cela.\n";
			 }
			 else {
				 moneyPlayer -= toBet4;
				 moneyBot -= toBet4;
				 pot += (toBet4 * 2);
				 std::system("cls");
				 break;
			 }
		 } while (true);

		 //we compare the values ​​obtained earlier to know who wins
		 if (playerValue < BotValue)
		 {
			 std::cout << "le bot gange avec " << BotValue << "\n";
			 moneyBot += pot;
			 pot -= pot;
		 }
		 else if (BotValue < playerValue)
		 {
			 std::cout << " le joueuur gagne avec " << playerValue << "\n";
			 moneyPlayer += pot;
			 pot -= pot;
		 }

		 else if (playerValue == BotValue)
		 {
			 std::cout << " egaliter avec " << playerValue << "\n";
			 moneyPlayer += (pot / 2);
			 moneyBot += (pot / 2);
			 pot -= pot;
		 }
		 else
		 {
			 std::cout << " aucun gagnaint \n";
		 }
		 //here we erase the decks of each deck that we have built for the next game
		 handPlayer.clear();
		 handBot.clear();
		 handTable.clear();
		 DeckCard.clear();
		 _handcalcul.clear();
		 flop.clear();
		 turn.clear();
		 river.clear();
		 //here we check that the players still have money if they lose
		 if (moneyPlayer <= 0 || moneyBot <= 0)
		 {
			 std::cout << "La partie est terminée car l'argent du joueur ou du bot est épuisé." << std::endl;
			 break; // Sortez de la boucle lorsque l'argent atteint zéro ou moins.
		 }

	 } while (true);
	 int s;
	 if (moneyPlayer <= 0)
	 {//display when you lose
		 system("cls");
		 std::cout << "\n\n\n\n\n\t\t\t\t\t\tfelicitation vous ete mort \n\n\n";
		 std::cout << "⠀      %%% %%%%%%%            |#|" << std::endl;
		 std::cout << "    %%%% %%%%%%%%%%%        |#|####" << std::endl;
		 std::cout << "  %%%%% %         %%%       |#|=#####" << std::endl;
		 std::cout << " %%%%% %   @    @   %%      | | ==####" << std::endl;
		 std::cout << "%%%%%% % (_  ()  )  %%     | |    ===##" << std::endl;
		 std::cout << "%%  %%% %  \_    | %%      | |       =##" << std::endl;
		 std::cout << "%    %%%% %  u^uuu %%     | |         ==#" << std::endl;
		 std::cout << "      %%%% %%%%%%%%%      | |           V" << std::endl;
		 std::cout << "note moi : ";
		 std::cin >> s;
		 std::cout << "Merci avoir joue ;)  ";
	 }
	 else if (moneyBot <= 0)
	 {//display when you win 
		 system("cls");
		 std::cout << "\n\n\n\n\n\t\t\t\t\t\tfelicitation vous ete sortir de la simulation \n\n\n";

		 printf("    *             _____          ..-~---------------- ~-..-~\n");
		 printf("   * *           |     |   \~~~\.'                    `./~~~/\n");
		 printf("  *   *         ---------   \__/                        \__/\n");
		 printf(" *     *       .'  O    \     /               /       \  '\n");
		 printf("*       *     (_____,    `._.'               |         }  \/~~~/\n");
		 printf("*********      `----.          /       }     |        /    \__/\n");
		 printf("*       *            `-.      |       /      |       /      `. ,~~|\n");
		 printf("*       *                ~-.__|      /_ - ~ ^|      /- _      `..-'\n");
		 printf("*       *                     |     /        |     /     ~-.     `-. _  _  _\n");
		 printf("*********                     |_____|        |_____|         ~ - . _ _ _ _ _>\n");
		 std::cout << "note moi: ";
		 std::cin >> s;
		 std::cout << "Merci avoir joue ;) ";
	 }
 }





