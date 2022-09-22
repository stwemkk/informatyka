/* Emil Krawczyk 2D -  program znajduje długość najdłuższego niemalejącego podciągu w n-elementowej tablicy */


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

int podciag(int n, int t[], int& poz) {
    int akt = 1;
    int max = 1;

    for (int i = 0; i <= n - 1; i++) {
        if (t[i + 1] >= t[i])
            akt++;
        else {
            if (akt > max) {
                max = akt;
                poz = i - max + 1;
            }
            akt = 1;
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
    int n = 20;

    int a = 2;
    int b = 5;

    srand(time(NULL));

    losuj(n, tab, 2, 5);

    wypisz(n, tab);

    int poz = 0;

    int wynik = podciag(n, tab, poz);

        cout << "dlugosc ciagu to: " << wynik << " od pozycji: " << poz << endl;


    return 0;
}
