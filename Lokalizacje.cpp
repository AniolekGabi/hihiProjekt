#include <iostream>
#include "Lokalizacje.h"
#include <time.h>
#include <cstdlib>
#include <windows.h>
#include <string>
#include <fstream>
using namespace std;


Lokalizacje::Lokalizacje(int i , string n) {
	id = i; 
	nazwa = n;  
}

void Lokalizacje::wyswietl() {
	cout << "id: " << id << " nazwa: " << nazwa << endl ; 
} 
void Lokalizacje::ustaw_nazwe(string n) {
	nazwa = n; 
}
void Lokalizacje::ustaw_id(int i) {
	id = i; 
}

Lokalizacje* wczytaj_z_pliku(int ilosc_lokalizacji) {
	fstream lokalizacje_plik("lokalizacje.txt", fstream::in);
	if (!lokalizacje_plik) {
		perror("Nie udalo siê otworzyæ pliku");
	}

	int id;
	string nazwa;
	Lokalizacje* lokalizacja = new Lokalizacje[ilosc_lokalizacji];
	string temp;
	int linia = 0;
	while (linia < ilosc_lokalizacji) {
		for (int i = 0; i < 2; i++) {
			switch (i) {
			case 0:
				getline(lokalizacje_plik, temp, ';');
				id = atoi(temp.c_str());
				lokalizacja[linia].ustaw_id(id);
				break;
			case 1:
				getline(lokalizacje_plik, temp);
				lokalizacja[linia].ustaw_nazwe(temp);
				break;

			}
		}
		linia++;
	}

	return lokalizacja;
}