#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main() {

	int x, y, z;
	int choose,point=500;
	srand(time(NULL));
	bool exit = true,exitPlaying=true;
	char yn;
	cout << "\t\t\t\t\t\tCASINO" << endl;
	cout << "\t\t\t\t\t\t||Bonus : 500 points ||" << endl;
	while (exit) {

		for(int a=0;a<115;a++)
			cout << "-" ;

		cout << endl;
		cout << "\t\t\t\t\t\tYour Points = " << point << endl<<endl;
		cout << "\t\t\t\t\t\t1.Play Casino Game" << endl << "\t\t\t\t\t\t2.Deposit money"<<endl<< 
			"\t\t\t\t\t\t3.Exit" << endl << "\t\t\t\t\t\tChoose:";
		cin >> choose;

		if (choose == 1) {

			exitPlaying = true;
			if (point <= 0) { //If player have no points
				cout << "\t\t\t\t\tYou don't have enough point! You should deposit." << endl;
				exitPlaying = false;
			}
			while (exitPlaying && point>0) {
				point -= 100;
				x = rand() % 10;
				y = rand() % 10;
				z = rand() % 10;
				cout << "\t\t\t\t\t\t" << x << "  " << y << "  " << z << endl;
				if (x == y) {
					if (x == z) {
						point += 10000;
						cout << "\t\t\t\t\t\t!!! YOU WIN !!!" << endl;
					}
					else {cout << "\t\t\t\t\t\tYou lost !!" << endl;}
				}
				else {cout << "\t\t\t\t\t\tYou lost !!" << endl;}

				cout << "\t\t\t\t\tDo you want to continue(Yes for y/No for n) : ";
				cin >> yn;
				if (yn == 'n') 
					exitPlaying = false;
				if (point <= 0) {
					cout << "\t\t\t\t\tYou don't have enough point! You should deposit." << endl;
					exitPlaying = false;
				}
			}
		}
		else if (choose == 2) {

			cout << endl << "\t\t\t\t\tHow much money will you deposit? " << endl;
			cout << "\t\t\t\t\t\tEnter: ";
			cin >> point;
			cout << "\t\t\t\t\tMoney has been deposited." << endl;
		}
		else if (choose == 3) {exit = false;}
		else 
			cout << "\t\t\t\t\t\tInvailed Number! Try Again." << endl;
	}
	cout << "\t\t\t\t\t\tGoodbye!" << endl;
	return 0;
}