#include <iostream>
using namespace std;

int main() {
	int bkpri;
	int totbk;
	double tax;
	double ship;
	double tot;
	cout << " How much did your books cost?\n";
	cin >> bkpri;
	cout << "How many books did were purchase?\n";
	cin >> totbk;
	tot = bkpri + (bkpri * .075) + (totbk * 2.5);
	cout << "Your total price is " << tot << ".\n";
}