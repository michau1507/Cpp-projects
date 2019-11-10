#pragma once

#include <iostream>
#include <string>



using namespace std;

class Baum {
private:
	double hoehe;
	double alter;

public:


	//Default construtor
	Baum();
	//general constructor
	Baum(double neuesHoehe, double neuesAlter);
	
	//Getter
	double getHoehe() { return hoehe; }
	double getAlter() { return alter; }

	//Setter
	void setHoehe(double neuesHoehe) { hoehe = neuesHoehe; }
	void setAlter(double neuesAlter) { alter = neuesAlter; }

	void alleWerteBaum();

	void setRandVal();

	void wachsen1Jahr();


};