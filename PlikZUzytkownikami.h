#ifndef PLIKZUZYTKOWNIKAMI_H
#define PLIKZUZYTKOWNIKAMI_H

#include <iostream>
#include <vector>
#include <fstream>
#include "Uzytkownik.h"
#include "MetodyPomocnicze.h"

using namespace std;

class PlikZUzytkownikami {
    string nazwaPlikuZUzytkownikami;
    fstream plikTekstowy;
    Uzytkownik uzytkownik;

    bool czyPlikJestPusty();
    string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
    void pobierzDaneUzytkownika(string daneJednegoUzytkownikaOddzielonePionowymiKreskami);

public:
    PlikZUzytkownikami();
    void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);
    vector<Uzytkownik> wczytajUzytkownikowZPliku();
};

#endif // PLIKZUZYTKOWNIKAMI_H