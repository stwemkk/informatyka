#include <iostream>
using namespace std;

int suma = 0;

int main(){
    for(int i=1; i<=2021; i=i+2) {

        int x=0;
        x=i*i;
        suma=suma+x;
    }

    cout << suma;
}
