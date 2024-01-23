#include <iostream> //�traukiame bibliotek�

using namespace std;

// Funkcija, kuri priima vardo, pavard�s, am�iaus ir profesijos duomenis ir juos i�veda
void informacija(string vardas, string pavarde, int amzius, string profesija);

int main() //pagrindin� funkcija
{
    // Nustatome programos lietuvi� kalb�
    setlocale(LC_ALL, "Lithuanian");

    // Panaudojame informacija funkcij� du kartus su skirtingais duomenimis
    informacija("Jonas", "Skaiteris", 24, "staliumi");
    informacija("Gerda", "Povilait�", 22, "skretore");

    return 0; // Gr��iname 0, nes pagrindin� funkcija yra int tipo
}

// Funkcija, kuri i�veda informacij� apie asmen�
void informacija(string vardas, string pavarde, int amzius, string profesija)
{
    // I�vedame informacij� � ekran�
    cout << vardas << " " << pavarde << " yra " << amzius << " met� am�iaus ir dirba " << profesija << "." << endl;
}
