#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include <array>
#include <stdlib.h>
#include <cstddef>
#include <time.h>

using namespace std;

int main(){
	string numRow = "1   2   3   4   5   6   7\n";
	string row1 = "-   -   -   -   -   -   -";
	string row2 = "-   -   -   -   -   -   -";
	string row3 = "-   -   -   -   -   -   -";
	string row4 = "-   -   -   -   -   -   -";
	string row5 = "-   -   -   -   -   -   -";
	string row6 = "-   -   -   -   -   -   -";

	int c1 = 0;
	int c2 = 0;
	int c3 = 0;
	int c4 = 0;
	int c5 = 0;
	int c6 = 0;
	int c7 = 0;

	cout << "Connect 4" << endl;
	cout << numRow <<endl <<row6 << endl << row5 << endl << row4 << endl << row3 << endl << row2 << endl << row1 << endl;
	int fillBoard = 42;
	int playerChoice;
	string playerPiece = "A";
	int playerTurn = 1;

	for (int i = 0; i < fillBoard; i++)
	{
		cout << "Player turn: Player " << playerTurn << endl;
		cin >> playerChoice;


		int playerInputValid = 0;
		if (playerChoice == 1 || playerChoice == 2 || playerChoice == 3 || playerChoice == 4 || playerChoice == 5 || playerChoice == 6 || playerChoice == 7){
			playerInputValid = 1;
		}
		else {
			playerInputValid = 0;
			playerChoice = 0;
			
		}

		system("CLS");

		if (playerChoice == 1 && c1<6) {
			if (row1[0] == '-') {
				row1.replace(0, 1, playerPiece);
				c1++;
			}
			else if (row2[0] == '-') {
				row2.replace(0, 1, playerPiece);
				c1++;
			}
			else if (row3[0] == '-') {
				row3.replace(0, 1, playerPiece);
				c1++;
			}
			else if (row4[0] == '-') {
				row4.replace(0, 1, playerPiece);
				c1++;
			}
			else if (row5[0] == '-') {
				row5.replace(0, 1, playerPiece);
				c1++;
			}
			else if (row6[0] == '-') {
				row6.replace(0, 1, playerPiece);
				c1++;
			}
		}

		else if (playerChoice == 2 && c2<6) {
			if (row1[4] == '-') {
				row1.replace(4, 1, playerPiece);
				c2++;
			}
			else if (row2[4] == '-') {
				row2.replace(4, 1, playerPiece);
				c2++;
			}
			else if (row3[4] == '-') {
				row3.replace(4, 1, playerPiece);
				c2++;
			}
			else if (row4[4] == '-') {
				row4.replace(4, 1, playerPiece);
				c2++;
			}
			else if (row5[4] == '-') {
				row5.replace(4, 1, playerPiece);
				c2++;
			}
			else if (row6[4] == '-') {
				row6.replace(4, 1, playerPiece);
				c2++;
			}
		}

		else if (playerChoice == 3 && c3<6) {
			if (row1[8] == '-') {
				row1.replace(8, 1, playerPiece);
				c3++;
			}
			else if (row2[8] == '-') {
				row2.replace(8, 1, playerPiece);
				c3++;
			}
			else if (row3[8] == '-') {
				row3.replace(8, 1, playerPiece);
				c3++;
			}
			else if (row4[8] == '-') {
				row4.replace(8, 1, playerPiece);
				c3++;
			}
			else if (row5[8] == '-') {
				row5.replace(8, 1, playerPiece);
				c3++;
			}
			else if (row6[8] == '-') {
				row6.replace(8, 1, playerPiece);
				c3++;
			}
		}

		else if (playerChoice == 4 && c4<6) {
			if (row1[12] == '-') {
				row1.replace(12, 1, playerPiece);
				c4++;
			}
			else if (row2[12] == '-') {
				row2.replace(12, 1, playerPiece);
				c4++;
			}
			else if (row3[12] == '-') {
				row3.replace(12, 1, playerPiece);
				c4++;
			}
			else if (row4[12] == '-') {
				row4.replace(12, 1, playerPiece);
				c4++;
			}
			else if (row5[12] == '-') {
				row5.replace(12, 1, playerPiece);
				c4++;
			}
			else if (row6[12] == '-') {
				row6.replace(12, 1, playerPiece);
				c4++;
			}
		}

		else if (playerChoice == 5 && c5<6) {
			if (row1[16] == '-') {
				row1.replace(16, 1, playerPiece);
				c5++;
			}
			else if (row2[16] == '-') {
				row2.replace(16, 1, playerPiece);
				c5++;
			}
			else if (row3[16] == '-') {
				row3.replace(16, 1, playerPiece);
				c5++;
			}
			else if (row4[16] == '-') {
				row4.replace(16, 1, playerPiece);
				c5++;
			}
			else if (row5[16] == '-') {
				row5.replace(16, 1, playerPiece);
				c5++;
			}
			else if (row6[16] == '-') {
				row6.replace(16, 1, playerPiece);
				c5++;
			}
		}

		else if (playerChoice == 6 && c6<6) {
			if (row1[20] == '-') {
				row1.replace(20, 1, playerPiece);
				c6++;
			}
			else if (row2[20] == '-') {
				row2.replace(20, 1, playerPiece);
				c6++;
			}
			else if (row3[20] == '-') {
				row3.replace(20, 1, playerPiece);
				c6++;
			}
			else if (row4[20] == '-') {
				row4.replace(20, 1, playerPiece);
				c6++;
			}
			else if (row5[20] == '-') {
				row5.replace(20, 1, playerPiece);
				c6++;
			}
			else if (row6[20] == '-') {
				row6.replace(20, 1, playerPiece);
				c6++;
			}
		}

		else if (playerChoice == 7) {
			if (row1[24] == '-') {
				row1.replace(24, 1, playerPiece);
			}
			else if (row2[24] == '-') {
				row2.replace(24, 1, playerPiece);
			}
			else if (row3[24] == '-') {
				row3.replace(24, 1, playerPiece);
			}
			else if (row4[24] == '-') {
				row4.replace(24, 1, playerPiece);
			}
			else if (row5[24] == '-') {
				row5.replace(24, 1, playerPiece);
			}
			else if (row6[24] == '-') {
				row6.replace(24, 1, playerPiece);
			}
		}

		else if (playerChoice == 0) {
			//do nothing
		}

		else {
			cout << "That column is full." << endl;
			playerInputValid = 0;

		}



		if (playerChoice == 0 || playerInputValid == 0) {
			fillBoard++;
			cout << "Your selection was not valid. Please choose a column using a whole number 1-7." << endl;

		}

		else {
			if (playerTurn == 1) {
				playerTurn = 2;
				playerPiece = "B";
			}

			else if (playerTurn == 2) {
				playerTurn = 1;
				playerPiece = "A";
			}
		}

		cout << "Connect 4" << endl;

		cout << numRow << endl << row6 << endl << row5 << endl << row4 << endl << row3 << endl << row2 << endl << row1 << endl;
	}

	cout << "Board filled." << endl;
return 0;
}