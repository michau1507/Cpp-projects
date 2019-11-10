#include <iostream>
#include <string>

#include <stdlib.h>
#include <time.h>

#include "Wald.h"

using namespace std;

int main() {
	srand(time(0));

	/*
	Baum b1(1.2, 2.5);
	Baum b2(4.4, 6.1);
	Baum b3;

	b1.setHoehe(2.1);
	

	b3.setRandVal();

	cout << "Alter: " << b1.getAlter() << endl;
	cout << "Hoehe: " << b1.getHoehe() << endl;


	b1.alleWerteBaum();
	b2.alleWerteBaum();
	b3.alleWerteBaum();

	b1.wachsen1Jahr();
	b1.alleWerteBaum();
	*/

	Wald w1;

	w1.waldPflanzen();
	w1.zeigBaumen();

	//w1.waldWacht1Jahr();
	//w1.zeigBaumen();

	//w1.waldWachtXJahren();
	//w1.zeigBaumen();

	//w1.altesteBaum();

	//w1.hoehsteBaum();

	//w1.durchschnittHoehe();

	//w1.durchschnittAlter();

	w1.wachsenMitSturm();

	system("pause");
	return 0;
}