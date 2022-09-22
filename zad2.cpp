/* Emil Krawczyk 2D -  program znajduje długość najdłuższego podciągu zer w n-elementowej tablicy oraz jego początkowy indeks */


#include <iostream>
#include <random>
#include <ctime>
#include <cstdlib>
#include <cmath>

using namespace std;

void wypisz(int n, int t[]) {
    for (int i = 0; i < n; i++)
        cout << t[i] << " ";
    cout << endl;
}

void losuj(int n, int t[], int a, int b) {
    for (int i = 0; i < n; i++)
        t[i] = rand() % (b - a + 1) + a;
}

int ciag(int n, int t[], int& poz) {
    int max = 0;
    int akt = 0;
    poz = 0;

    for (int i = 1; i <= n; i++) {
        if (t[i] == 0) {
            akt++;
        }

        else {
            if (akt > max) {
                max = akt;
                poz = i - max;
            }
            akt = 0;
        }
    }

    if (akt > max) {
        max = akt;
        poz = n + 1 - max;
    }

    return max;
}

int main() {

    int tab[20];
    int n = 10;

    int a = 0;
    int b = 1;

    srand(time(NULL));

    losuj(n, tab, 0, 1);

    wypisz(n, tab);

    int poz = 0;

    int wynik = ciag(n, tab, poz);

    cout << "dlugosc ciagu to: " << wynik << " od pozycji: " << poz << endl;


    return 0;
}
