#include <iostream>

using namespace std;

 
class Lokalizacje {
	int id;
	string nazwa;

public:
	Lokalizacje(int = 0, string = "Nazwa Nieznana"); 
	void wyswietl(); 
	void ustaw_nazwe(string); 
	void ustaw_id(int); 

};

Lokalizacje* wczytaj_z_pliku(int ilosc_lokalizacji);

class swiat {

	
};
