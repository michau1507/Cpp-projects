#include "Baum.h"




Baum::Baum() {
	hoehe = 0.0;
	alter = 0.0;
}

Baum::Baum(double neuesHoehe, double neuesAlter) {
	hoehe = neuesHoehe;
	alter = neuesAlter;
}

void Baum::alleWerteBaum() {
	cout << "--------------------------"<<endl;
	cout << "Hoehe: " << hoehe << endl;
	cout << "Alter: " << alter << endl;
}

void  Baum::setRandVal() {
	
	double r1 = (rand() % 100) + 1.0;	
	double r2 = (rand() % 100) + 1.0;	
	if (r1 >= r2) {
		alter = r1;
		hoehe = r2;
	}
	else {
		alter = r2;
		hoehe = r1;
	}

}

void Baum::wachsen1Jahr() {
	alter += 1;	
	double highIncrease = (rand() % 101) / 101.0;
	cout << "Das  Baum waecht um " << highIncrease << " m." << endl;
	hoehe += highIncrease;
}