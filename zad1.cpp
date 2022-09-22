/* Emil Krawczyk 2D -  program znajduje ilość trójek sąsiadów w n-elementowej tablicy liczb całkowitych od a do b */


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
        t[i] = rand() % (b - a + 1) + a; /*to wazne!*/
}

int trojki(int n, int t[]) {

    int wynik = 0;

    for (int i = 0; i <= n - 2; i++) {
        if (abs(t[i] - t[i+1]) == 1 && abs(t[i+1] - t[i + 2]) == 1)
            wynik++;
    };

    return wynik;
}

/* <a, ... , b> = b-a+1  - odleglosc od a do b to b-a+1*/

int main() {

    int tab[20];
    int n = 10;

    int a = 2;
    int b = 6;

    srand(time(NULL));

    losuj(n, tab, a, b);

    wypisz(n, tab);

    cout << trojki(n, tab) << endl;



    return 0;
}
