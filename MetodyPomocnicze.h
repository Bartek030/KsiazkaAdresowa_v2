#ifndef METODYPOMOCNICZE_H
#define METODYPOMOCNICZE_H

#include<iostream>
#include<algorithm>

using namespace std;

class MetodyPomocnicze {

public:
    static string konwerjsaIntNaString(int liczba);
    static int konwersjaStringNaInt(string liczba);
    static string wczytajLinie();
    static char wczytajZnak();
    static string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
};

#endif // METODYPOMOCNICZE_H
