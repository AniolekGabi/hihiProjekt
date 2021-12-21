#include <iostream>
#include "Lokalizacje.h"
#include <time.h>
#include <cstdlib>
#include <windows.h>
#include <string>
#include <fstream>
//#include <sstream>

using namespace std; 
#define ILOSC_LOKALIZACJI 6 

int main() {

	Lokalizacje* lokalizacje = wczytaj_z_pliku(ILOSC_LOKALIZACJI); //tworzy listę z lokalizacjami 

	for (int i = 0; i < ILOSC_LOKALIZACJI; i++) {
		lokalizacje[i].wyswietl();
	}

	delete[]lokalizacje; 
	return 0; 
}
