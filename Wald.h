#pragma once

#include "Baum.h"
#include <vector>



class Wald {
private:
	vector<Baum> baumen;

public:
	void waldPflanzen();

	void zeigBaumen();

	void waldWacht1Jahr();

	void waldWachtXJahren();

	void altesteBaum();

	void hoehsteBaum();

	void durchschnittHoehe();

	void durchschnittAlter();

	void wachsenMitSturm();
};