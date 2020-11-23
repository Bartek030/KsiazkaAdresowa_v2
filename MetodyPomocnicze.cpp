#include "MetodyPomocnicze.h"
#include <sstream>

using namespace std;

string MetodyPomocnicze::konwerjsaIntNaString(int liczba)
{
    ostringstream ss;
    ss << liczba;
    string str = ss.str();
    return str;
}

int MetodyPomocnicze::konwersjaStringNaInt(string liczba) {
    return atoi(liczba.c_str());
}

string MetodyPomocnicze::wczytajLinie()
{
    string wejscie = "";
    cin.clear();
    cin.sync();
    getline(cin, wejscie);
    return wejscie;
}

