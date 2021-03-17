#include<iostream>
#include<Windows.h>
#include<mmsystem.h>
#include<string>
#include<iomanip>
#include <stdio.h>
#include <stdlib.h>


using namespace std;


void ClearConsoleToColors(int ForgC, int BackC);

int main() {



	PlaySound(TEXT("Music.wav"), NULL, SND_FILENAME | SND_ASYNC);
	cout << "\t\t\t\t\t\t  <<Kareem Khasawneh>>" << endl << endl;
	cout << "\t\t\t\t\t\t<<Welcome to The Suits>>" << endl << endl;

	//Sleep(5000);
	cout << " ";
	system("Pause");
	system("Cls");

	cout << "\t\t\t\t\t\t<<Welcome to The Suits>>" << endl << endl;
	int ct, cb;
	cout << " Please choose the text and background colors: " << endl << endl;

	cout << "\t1-Black\t\t 4-Aqua\t\t 7-Yellow" << endl << endl;
	cout << "\t2-Blue\t\t 5-Red\t\t 8-White" << endl << endl;
	cout << "\t3-Green\t\t 6-Purple\t 9-Gray" << endl << endl;
	cout << " Please choose the text color" << endl << endl << " "; cin >> ct;
	cout << endl << endl << " Please choose the Back Ground color" << endl << endl << " "; cin >> cb;
	ct--; cb--;

	ClearConsoleToColors(ct, cb);

	Sleep(500);
	system("Cls");
	cout << "\t\t\t\t\t\t<<Welcome to The Suits>>" << endl << endl;
	cout << endl << " Welcome to The Suits we are glad you chose us" << endl << endl;

	cout << " ";
	system("pause");

	system("Cls");

	for (int i = 0; i <= 100; i += 10) {
		cout << "\t\t\t\t\t\t<<Welcome to The Suits>>" << endl << endl;
		cout << " Please wait, the program is loading"; Sleep(100); cout << "."; Sleep(100); cout << "."; Sleep(100); cout << "." << endl;
		cout << "\n %" << i;
		Sleep(500);
		system("Cls");
	}
	int cc = 0;
	int size, aof, aofc[100];
	double price, total = 0;
	string sizec[100], order[100];
	string bf[3] = { "Ackee & Saltfish","Callalou & Saltfish" , "Butter Bean & Saltfish" };
	string ld[12] = { "Cow Foot","Oxtail","Curry Goat\0","Brown Stew Fish","Fried Chicken","Slice Fish","Steawpeas","Stew Chicken","Curry Chicken","Jerk Chicken","Bar-B-Fry","Escovitch Fish", };
	string drink[12] = { "Water","Sorrel","Lemonade","Can Soda","20oz Soda","Ting","Coconut Water","DG Orange","DG Soda Cream","DG Pineapple Ginger","DG Pineapple Soda","Mystic" };
	string dssr[14] = { "Toffe Icecream","Cheese Cake","Strawberries Icecream","Apple Pie","Caramel Mousse","Malteser Icecream","Chocolate Brownie","Joel's Pavlova","Chocolate Icecream","Profiteroles","Toffee Pudding","Knickerboker Glory","Banoffe Pie","Joel's Bannana Boat" };

	for (int i = 1; i != 0;) {

		Sleep(500);
		system("Cls");

		cout << "\t\t\t\t\t\t\t<<The Suits>>" << endl << endl;
		cout << " Welcome to the main menu :" << endl << endl;
		cout << " What menu would you like to order from?" << endl << endl;
		cout << " 1-Breakfast\t\t\t\t2-Lunch/Dinner" << endl << endl << " 3-Drink\t\t\t\t4-Dessert" << endl << endl;
		cout << endl << "\t\t\t\t\t\t\t\t\t\t*You may press 0 to finish your order*" << endl << endl << " ";
		int x = 0;
		cin >> x;

		if (x == 0)
			break;

		Sleep(500);
		system("CLS");

		if (x > 6 || x < 1) {
			cout << "\a Sorry you have entered a wrong input" << endl << endl << " Please press any buttom to continue ordering" << endl << " or press 0 to stop" << endl << endl << " ";
			cin >> i;

			Sleep(500);
			system("CLS");

			if (i != 0)
				continue;
			else
				break;
			//ifwrong
		}

		switch (x) {
		case 1:
			for (int counter = 1; counter != 0;) {
				Sleep(500);
				system("CLS");

				cout << "\t\t\t\t\t\t\t<<The Suits>>" << endl << endl;

				cout << " Break Fast\t\t\t\t     SM     MED" << endl;
				cout << "-----------------------------------------------------------" << endl;
				cout << " 1-" << bf[0] << "\t\t\t     8$     10$" << endl << endl;
				cout << " 2-" << bf[1] << "\t\t\t     6.25$  8.25$" << endl << endl;
				cout << " 3-" << bf[2] << "\t\t     6.25$  8.25$" << endl << endl;
				cout << endl << "\t\t\t\t\t\t\t\t\t\t*You may press 0 to finish your order*" << endl << endl;
				cout << endl << " What would you like to order: " << endl << endl << " ";
				cin >> x;

				if (x == 00)
					break;

				if (x > 3 || x < 1) {

					Sleep(500);
					system("CLS");

					cout << endl << " \aSorry you have entered a wrong input" << endl << endl << " Please enter any thing else to continue ordering" << endl << endl << " or press 0 to go back to the main menu" << endl << endl << " ";
					cin >> i;
					if (i != 0)
						continue;
					else
						break;
					//ifwrong order c1
				}

				cout << endl << " What size would you like:\n*press 1 for SM, and 2 for MED*" << endl << endl << " ";
				cin >> size;

				if (size > 2 || size < 1) {

					Sleep(500);
					system("CLS");

					cout << endl << " \aSorry you have entered a wrong input" << endl << endl << " Please enter any thing else to continue ordering" << endl << endl << " or press 0 to go back to the main menu" << endl << endl << " ";
					cin >> i;
					if (i != 0)
						continue;
					else
						break;
					//ifwrong size c1
				}

				switch (x) {

				case 1: order[cc] = bf[0]; break;
				case 2: order[cc] = bf[1]; break;
				case 3: order[cc] = bf[2]; break;

				}
				switch (size) {

				case 1: sizec[cc] = "small"; break;
				case 2: sizec[cc] = "medium"; break;
				case 3: sizec[cc] = "larg"; break;

				}

				switch (x) {
				case 1: if (size == 1)
					price = 8;
						else
					price = 10;
					break;
				default: if (size == 1)
					price = 6.25;
						 else
					price = 8.25;
					//switch c1 price
				}

				cout << endl << " Select the amout you want :" << endl << endl << " ";
				cin >> aof;
				aofc[cc] = aof;
				price = aof * price;
				total = total + price;

				cout << endl << " you have successfully ordered " << aof;

				switch (size) {
				case 1: cout << " small"; break;
				case 2: cout << " medium"; break;
				case 3: cout << " larg"; break;

					//switch c1 finish order food size
				}

				switch (x) {
				case 1: cout << " " << bf[0] << endl; break;
				case 2: cout << " " << bf[1] << endl; break;
				case 3: cout << " " << bf[2] << endl; break;
					//switch c1 finish order food name
				}
				cout << endl;
				cout << " for the price of " << price << " $" << endl << endl;
				counter = 0;
				cout << " ";
				system("pause");

				//c1 main for
			} break;


		case 2:
			for (int counter = 1; counter != 0;) {
				Sleep(500);
				system("CLS");

				cout << "\t\t\t\t\t\t\t<<The Suits>>" << endl << endl;

				cout << " Lunch/Dinner\t\t\t     SM   MED   LRG\t Lunch/Dinner\t\t\t     SM   MED   LRG" << endl;
				cout << "------------------------------------------------------------------------------------------------------------" << endl;
				cout << " 1-" << ld[0] << "\t\t\t     07$  09$   11$\t 7-" << ld[6] << "\t\t\t     08$  11$   14$" << endl << endl;
				cout << " 2-" << ld[1] << "\t\t\t     08$  11$   14$\t 8-" << ld[7] << "\t\t\t     07$  09$   11$" << endl << endl;
				cout << " 3-" << ld[2] << "\t\t\t     07$  10$   13$\t 9-" << ld[8] << "\t\t     07$  09$   11$" << endl << endl;
				cout << " 4-" << ld[3] << "\t\t     07$  09$   11$\t 10-" << ld[9] << "\t\t     07$  09$   11$ " << endl << endl;
				cout << " 5-" << ld[4] << "\t\t     07$  09$   11$\t 11-" << ld[10] << "\t\t\t     07$  09$   11$ " << endl << endl;
				cout << " 6-" << ld[5] << "\t\t\t     07$  09$   11$\t 12-" << ld[11] << "\t\t     08$  11$   14$ " << endl << endl;
				cout << endl << "\t\t\t\t\t\t\t\t\t\t*You may press 0 to finish your order*" << endl << endl;
				cout << endl << " What would you like to order: " << endl << endl << " ";
				cin >> x;

				if (x == 00)
					break;

				if (x > 12 || x < 1) {

					Sleep(500);
					system("CLS");

					cout << endl << " \aSorry you have entered a wrong input" << endl << endl << " Please enter any thing else to continue ordering" << endl << endl << " or press 0 to go back to the main menu" << endl << endl << " ";
					cin >> i;
					if (i != 0)
						continue;
					else
						break;
					//ifwrong order c2
				}

				cout << endl << " What size would you like:\n*press 1 for SM, 2 for MED, and 3 for LRG*" << endl << endl << " ";
				cin >> size;

				if (size > 3 || size < 1) {

					Sleep(500);
					system("CLS");

					cout << endl << " \aSorry you have entered a wrong input" << endl << endl << " Please enter any thing else to continue ordering" << endl << endl << " or press 0 to go back to the main menu" << endl << endl << " ";
					cin >> i;
					if (i != 0)
						continue;
					else
						break;
					//ifwrong size c2
				}
				switch (x) {
				case 1: order[cc] = ld[0]; break;
				case 2: order[cc] = ld[1]; break;
				case 3: order[cc] = ld[2]; break;
				case 4: order[cc] = ld[3]; break;
				case 5: order[cc] = ld[4]; break;
				case 6: order[cc] = ld[5]; break;
				case 7: order[cc] = ld[6]; break;
				case 8: order[cc] = ld[7]; break;
				case 9: order[cc] = ld[8]; break;
				case 10: order[cc] = ld[9]; break;
				case 11: order[cc] = ld[10]; break;
				case 12: order[cc] = ld[11]; break;
				}

				switch (size) {
				case 1: sizec[cc] = "small"; break;
				case 2: sizec[cc] = "medium"; break;
				case 3: sizec[cc] = "larg"; break;
				}

				switch (x) {
				case 2:
				case 3:
				case 12:
					if (size == 1)
						price = 8;
					else if (size == 2)
						price = 11;
					else
						price = 14;
					break;

				case 5:
					if (size == 1)
						price = 7;
					else if (size == 2)
						price = 10;
					else
						price = 13;
					break;

				default: if (size == 1)
					price = 7;
						 else if (size == 2)
					price = 9;
						 else
					price = 11;
					//switch c2 price
				}

				cout << endl << " Select the amout you want :" << endl << endl << " ";
				cin >> aof;

				aofc[cc] = aof;


				price = aof * price;
				total = total + price;

				cout << endl << " you have successfully ordered " << aof;

				switch (size) {
				case 1: cout << " small"; break;
				case 2: cout << " medium"; break;
				case 3: cout << " larg"; break;

					//switch c2 finish order food size
				}

				switch (x) {
				case 1: cout << " Cow Foot" << endl; break;
				case 2: cout << " Oxtail" << endl; break;
				case 3: cout << " Curry Goat" << endl; break;
				case 4: cout << " Brown Stew Fish" << endl; break;
				case 5: cout << " Fried Chicken" << endl; break;
				case 6: cout << " Slice Fish" << endl; break;
				case 7: cout << " Steawpeas" << endl; break;
				case 8: cout << " Stew Chicken" << endl; break;
				case 9: cout << " Curry Chicken" << endl; break;
				case 10: cout << " Jerk Chicken" << endl; break;
				case 11: cout << " Bar-B-Fry" << endl; break;
				case 12: cout << " Escovitch Fish" << endl; break;
					//switch c2 finish order food name
				}
				cout << endl;
				cout << " for the price of " << price << " $" << endl << endl;
				counter = 0;
				cout << " ";
				system("pause");

				//c2 main for
			} break;

		case 3:
			for (int counter = 1; counter != 0;) {
				Sleep(500);
				system("CLS");

				cout << "\t\t\t\t\t\t\t<<The Suits>>" << endl << endl;

				cout << " Drinks\t\t\t\t\t Drinks\t\t\t\t\t Drinks" << endl;
				cout << "---------------------------------------------------------------------------------------------------------------" << endl;
				cout << " 1-" << drink[0] << "\t\t     1.00$\t 5-" << drink[4] << "\t\t     1.50$\t 9-" << drink[8] << "\t 2.00$" << endl << endl;
				cout << " 2-" << drink[1] << "\t\t     4.00$\t 6-" << drink[5] << "\t\t\t     2.50$\t 10-" << drink[9] << "  2.00$" << endl << endl;
				cout << " 3-" << drink[2] << "\t\t     2.50$\t 7-" << drink[6] << "\t     2.00$\t 11-" << drink[10] << "    2.00$" << endl << endl;
				cout << " 4-" << drink[3] << "\t\t     1.00$\t 8-" << drink[7] << "\t\t     2.00$\t 12-" << drink[11] << "\t\t 2.00$" << endl << endl;

				cout << endl << "\t\t\t\t\t\t\t\t\t\t*You may press 0 to finish your order*" << endl << endl;
				cout << endl << " What would you like to order: " << endl << endl << " ";
				cin >> x;

				if (x == 00)
					break;

				if (x > 12 || x < 1) {

					Sleep(500);
					system("CLS");

					cout << endl << " \aSorry you have entered a wrong input" << endl << endl << " Please enter any thing else to continue ordering" << endl << endl << " or press 0 to go back to the main menu" << endl << endl << " ";
					cin >> i;
					if (i != 0)
						continue;
					else
						break;
					//ifwrong order c3
				}

				switch (x) {
				case 1:
				case 4: price = 1; break;

				case 3:
				case 6: price = 1.5; break;

				case 5: price = 1.5; break;

				case 2: price = 4; break;

				default: price = 2; break;
					//switch c3 price
				}

				switch (x) {
				case 1: order[cc] = drink[0]; break;
				case 2: order[cc] = drink[1]; break;
				case 3: order[cc] = drink[2]; break;
				case 4: order[cc] = drink[3]; break;
				case 5: order[cc] = drink[4]; break;
				case 6: order[cc] = drink[5]; break;
				case 7: order[cc] = drink[6]; break;
				case 8: order[cc] = drink[7]; break;
				case 9: order[cc] = drink[8]; break;
				case 10: order[cc] = drink[9]; break;
				case 11: order[cc] = drink[10]; break;
				case 12: order[cc] = drink[11]; break;
				}

				cout << endl << " Select the amout you want :" << endl << endl << " ";
				cin >> aof;

				aofc[cc] = aof;

				price = aof * price;
				total = total + price;

				cout << endl << " you have successfully ordered " << aof;

				switch (x) {
				case 1: cout << " Water" << endl; break;
				case 2: cout << " Sorrel" << endl; break;
				case 3: cout << " Lemonade" << endl; break;
				case 4: cout << " Can Soda" << endl; break;
				case 5: cout << " 20oz Soda" << endl; break;
				case 6: cout << " Ting" << endl; break;
				case 7: cout << " Coconut Water" << endl; break;
				case 8: cout << " DG Orange" << endl; break;
				case 9: cout << " DG Soda Cream" << endl; break;
				case 10: cout << " DG Pineapple Ginger" << endl; break;
				case 11: cout << " DG Pineapple Soda" << endl; break;
				case 12: cout << " Mystic" << endl; break;
					//switch c3 finish order food name
				}

				cout << endl;
				cout << " for the price of " << price << " $" << endl << endl;
				counter = 0;
				cout << " ";
				system("pause");

				//c3 main for
			} break;

		case 4:
			for (int counter = 1; counter != 0;) {
				Sleep(500);
				system("CLS");

				cout << "\t\t\t\t\t\t\t<<The Suits>>" << endl << endl;

				cout << " Dessert\t\t\t\t\t\t Dessert     " << endl;
				cout << "-----------------------------------------------------------------------------------------------------------" << endl;
				cout << " 1-" << dssr[0] << "\t\t\t     5.20$\t 8-" << dssr[7] << "\t\t\t     5.20$" << endl << endl;
				cout << " 2-" << dssr[1] << "\t\t\t\t     6.20$\t 9-" << dssr[8] << "\t\t\t     5.20$" << endl << endl;
				cout << " 3-" << dssr[2] << "\t\t     5.20$\t 10-" << dssr[9] << "\t\t\t     5.20$" << endl << endl;
				cout << " 4-" << dssr[3] << "\t\t\t\t     5.20$\t 11-" << dssr[10] << "\t\t\t     5.20$" << endl << endl;
				cout << " 5-" << dssr[4] << "\t\t\t     4.70$\t 12-" << dssr[11] << "\t\t\t     5.70$" << endl << endl;
				cout << " 6-" << dssr[5] << "\t\t\t     5.60$\t 13-" << dssr[12] << "\t\t\t\t     5.70$" << endl << endl;
				cout << " 7-" << dssr[6] << "\t\t\t     5.20$\t 14-" << dssr[13] << "\t\t\t     5.20$" << endl << endl;
				cout << endl << "\t\t\t\t\t\t\t\t\t\t*You may press 0 to finish your order*" << endl << endl;
				cout << endl << " What would you like to order: " << endl << endl << " ";
				cin >> x;

				if (x == 0)
					break;

				if (x > 14 || x < 1) {

					Sleep(500);
					system("CLS");

					cout << endl << " \aSorry you have entered a wrong input" << endl << endl << " Please enter any thing else to continue ordering" << endl << endl << " or press 0 to go back to the main menu" << endl << endl << " ";
					cin >> i;
					if (i != 0)
						continue;
					else
						break;
					//ifwrong order c4
				}

				switch (x) {
				case 1: order[cc] = dssr[0]; break;
				case 2: order[cc] = dssr[1]; break;
				case 3: order[cc] = dssr[2]; break;
				case 4: order[cc] = dssr[3]; break;
				case 5: order[cc] = dssr[4]; break;
				case 6: order[cc] = dssr[5]; break;
				case 7: order[cc] = dssr[6]; break;
				case 8: order[cc] = dssr[7]; break;
				case 9: order[cc] = dssr[8]; break;
				case 10: order[cc] = dssr[9]; break;
				case 11: order[cc] = dssr[10]; break;
				case 12: order[cc] = dssr[11]; break;
				case 13: order[cc] = dssr[12]; break;
				case 14: order[cc] = dssr[13]; break;
				}

				switch (x) {
				case 2: price = 6.2; break;
				case 5: price = 4.7; break;
				case 6: price = 5.6; break;
				case 12:
				case 13: price = 5.7; break;
				default: price = 5.2; break;
					//switch c4 price
				}

				cout << endl << " Select the amout you want :" << endl << endl << " ";
				cin >> aof;

				aofc[cc] = aof;

				price = aof * price;
				total = total + price;

				cout << endl << " you have successfully ordered " << aof;

				switch (x) {
				case 1: cout << " Toffe Icecream" << endl; break;
				case 2: cout << " Cheese Cake" << endl; break;
				case 3: cout << " Strawberries Icecream" << endl; break;
				case 4: cout << " Apple Pie" << endl; break;
				case 5: cout << " Caramel Mousse" << endl; break;
				case 6: cout << " Malteser Icecream" << endl; break;
				case 7: cout << " Chocolate Brownie" << endl; break;
				case 8: cout << " Joel's Pavlova" << endl; break;
				case 9: cout << " Chocolate Icecream" << endl; break;
				case 10: cout << " Profiteroles" << endl; break;
				case 11: cout << " Toffee Pudding" << endl; break;
				case 12: cout << " Knickerboker Glory" << endl; break;
				case 13: cout << " Banoffe Pie" << endl; break;
				case 14: cout << " Joel's Bannana Boat" << endl; break;
					//switch c4 finish order food name
				}
				cout << endl;
				cout << " for the price of " << price << " $" << endl << endl;
				counter = 0;
				cout << " ";
				system("pause");

				//c4 main for
			} break;

			//main switch
		}

		system("Cls");

		if (i == 0) {
			i = 1;
			continue;
		}
		cc++;
		cout << "\t\t\t\t\t\t\t<<The Suits>>" << endl << endl;
		cout << " Would you like to order something else" << endl << endl << " Please enter any thing else to continue ordering" << endl << endl << " or press 0 to go back to finish your order" << endl << endl << " ";
		cin >> i;
		if (i != 0)
			continue;
		else
			break;

		//mainfor
	}
	Sleep(500);
	system("Cls");
	cout << "\t\t\t\t\t\t\t<<The Suits>>" << endl << endl;
	cout << " Thanks for ordering from the Suits " << endl << endl;
	cout << " Your ordered: " << endl << endl;

	for (int p = 0; p < cc; p++) {
		cout << " " << aofc[p] << " " << sizec[p] << " " << order[p] << endl;
	}

	cout << "\n for the total of ";
	if (total >= 30 && total < 50)
		cout << total - total * 0.15 << " $" << endl << endl;
	else
		if (total >= 50 && total < 70)
			cout << total - total * 0.25 << " $" << endl << endl;
		else
			if (total >= 70)
				cout << total - total * 0.35 << " $" << endl << endl;
			else
				cout << total << " $" << endl << endl;

	cout << " We are pleased to serve you, and wish you a good day" << endl << endl;
	cout << " ";
	system("pause");
	return 0;
}



void ClearConsoleToColors(int ForgC, int BackC)
{
	WORD wColor = ((BackC & 0x0F) << 4) + (ForgC & 0x0F);
	//This is used to get the handle to current output buffer.

	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	//This is used to reset the carat/cursor to the top left.

	COORD coord = { 0, 0 };
	//This is a return value indicating how many characterss were written
	  //   It is not used but we need to capture this since it will be
		//   written anyway (passing NULL causes an access violation).

	DWORD count;

	//This is a structure containing all the console info
// It is used here to find the size of the console.

	CONSOLE_SCREEN_BUFFER_INFO csbi;
	//Now the current color will be set by this handle

	SetConsoleTextAttribute(hStdOut, wColor);

	if (GetConsoleScreenBufferInfo(hStdOut, &csbi))
	{
		//This fills the buffer with a given character (in this case 32=space).
		FillConsoleOutputCharacter(hStdOut, (TCHAR)32, csbi.dwSize.X * csbi.dwSize.Y, coord, &count);

		FillConsoleOutputAttribute(hStdOut, csbi.wAttributes, csbi.dwSize.X * csbi.dwSize.Y, coord, &count);
		//This will set our cursor position for the next print statement
		SetConsoleCursorPosition(hStdOut, coord);
	}
	return;
}