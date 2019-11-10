#include "Wald.h"

void Wald::waldPflanzen() {
	cout << "Wie viel Baumen moechtest du pflanzen? " << endl;
	int baumenAnzahl;
	cin >> baumenAnzahl;
	for (int i = 0; i < baumenAnzahl; i++) {
		Baum neuBaum;
		neuBaum.setRandVal();
		baumen.push_back(neuBaum);
	}
	cout << "Sie haben " << baumen.size() << " Baume gepflanzen." << endl;

}

void Wald::zeigBaumen() {
	for (int i = 0; i < baumen.size(); i++) {
		baumen[i].alleWerteBaum();
	}
}


void Wald::waldWacht1Jahr() {
	for (int i = 0; i < baumen.size(); i++) {
		baumen[i].wachsen1Jahr();
	}
}

void Wald::waldWachtXJahren() {
	cout << "Wie viele Jahre soll der Wald wachsen?" << endl;
	int jahrenWachsen;
	cin >> jahrenWachsen;
	for (int n = 0; n < jahrenWachsen; n++) {
		waldWacht1Jahr();
	}
}

void Wald::altesteBaum() {
	double alteste = 0;
	int indexBaum = 0;
	for (int i = 0; i < baumen.size(); i++) {
		if (baumen[i].getAlter() > alteste){
			alteste = baumen[i].getAlter();
			indexBaum = i;
		}
	}
	cout << "Die alteste Baum ist " << alteste << " Jahre alt und hat index " << indexBaum << endl;
}

void Wald::hoehsteBaum() {
	double hoehste = 0;
	int indexBaum = 0;
	for (int i = 0; i < baumen.size(); i++) {
		if (baumen[i].getHoehe() > hoehste) {
			hoehste = baumen[i].getHoehe();
			indexBaum = i;
		}
	}
	cout << "Die hoehste Baum ist " << hoehste << " meter hoch und hat index " << indexBaum << endl;
}

void Wald::durchschnittHoehe() {
	double summeHoehe = 0;
	for (int i = 0; i < baumen.size(); i++) {
		summeHoehe += baumen[i].getHoehe();
	}
	double durchschnittH = summeHoehe / baumen.size();
	cout << "Durchschnitthoehe ist " << durchschnittH << endl;
}

void Wald::durchschnittAlter() {
	double summeAlter = 0;
	for (int i = 0; i < baumen.size(); i++) {
		summeAlter += baumen[i].getAlter();
	}
	double durchschnittA = summeAlter / baumen.size();
	cout << "Durchschnitalter ist " << durchschnittA << endl;
}



void Wald::wachsenMitSturm() {
	cout << "Wie viele Jahre soll der Wald wachsen?" << endl;
	int jahrenWachsen;
	cin >> jahrenWachsen;
	int jahrenGewuchst = 1;
	while (jahrenWachsen > jahrenGewuchst) {
		int sturmNach = (rand() % 20) + 1;//Zufaelige Anzahl von Jahre, danach fuenfte Baum zerstoert werden soll
		if ((sturmNach > (jahrenWachsen - jahrenGewuchst))&&((jahrenWachsen!=jahrenGewuchst))) {//hier muss die Sleife unterbrechen werden, wenn Sturm nach mehr Jahren ist als der Wald wachsen soll
			sturmNach = (jahrenWachsen - jahrenGewuchst);
		}
		cout << "Nachste Sturm nach " << sturmNach<<" Jahre." << endl;
		for (int i = 0; i < sturmNach; i++) {
			waldWacht1Jahr(); //jedes Baum wird um andere groese wachsen waehrend ein Jahr
			jahrenGewuchst++; //Zaelt die Jahre, der Wald ist schon gewachst (anzahl fuer while schleife)
			cout << "Jahre gewuchst: " << jahrenGewuchst << endl;			
		}
		cout << "Sturm!" << endl;
		int funfteBaumIndex= (rand() % 5); //Jeder 5te Baum zerstoert, aber mit funfteBaumIndex die Baumen werden gewechselt. Nicht immer die Gleiche Baume wird zerstoert
		cout << "Zufallige Baum, die zerstoeren wird: " << funfteBaumIndex << endl;
		for (int k = funfteBaumIndex; k < baumen.size(); k += 5) {
			baumen[k].setAlter(0.0);
			baumen[k].setHoehe(0.0);
		}
		zeigBaumen(); 
	}
}