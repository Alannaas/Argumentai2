#include <iostream> //átraukiame bibliotekà

using namespace std;

// Funkcija, kuri priima vardo, pavardës, amþiaus ir profesijos duomenis ir juos iðveda
void informacija(string vardas, string pavarde, int amzius, string profesija);

int main() //pagrindinë funkcija
{
    // Nustatome programos lietuviø kalbà
    setlocale(LC_ALL, "Lithuanian");

    // Panaudojame informacija funkcijà du kartus su skirtingais duomenimis
    informacija("Jonas", "Skaiteris", 24, "staliumi");
    informacija("Gerda", "Povilaitë", 22, "skretore");

    return 0; // Gràþiname 0, nes pagrindinë funkcija yra int tipo
}

// Funkcija, kuri iðveda informacijà apie asmená
void informacija(string vardas, string pavarde, int amzius, string profesija)
{
    // Iðvedame informacijà á ekranà
    cout << vardas << " " << pavarde << " yra " << amzius << " metø amþiaus ir dirba " << profesija << "." << endl;
}
