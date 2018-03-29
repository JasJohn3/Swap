// Swap.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void badSwap(int x, int y);
void goodSwap(int& x, int& y);
int main()
{
	int myScore = 150;
	int yourScore = 1000;

	cout << "Original Values"<< endl;
	cout << "My Score: " << myScore << endl;
	cout << "yourScore: " << yourScore << endl;

	cout << "Calling badSwap()" << endl;
	badSwap(myScore, yourScore);
	cout << "myScore: " << myScore << endl;
	cout << "yourScore: " << yourScore << endl;


	cout << "Calling goodSwap()" << endl;
	goodSwap(myScore, yourScore);
	cout << "myScore: " << myScore << endl;
	cout << "yourScore: " << yourScore << endl;

	system("pause");
    return 0;
}
void badSwap(int myScore, int yourScore)
{
	int temp = myScore;
	myScore = yourScore;
	yourScore = temp;
}
void goodSwap(int& myScore, int& yourScore)
{
	int temp = myScore;
	myScore = yourScore;
	yourScore = temp;
}
