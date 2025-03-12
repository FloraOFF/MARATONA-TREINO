#include <iostream>
#include <vector>
#include <cmath>
// #include <math.h>

using namespace std;

int main() {
    char letra = '\0';
    // char copos = ['a', 'B', 'c'];
    // bool posic = [false, false, false];
    int n, contador = 0, aux = 0;

    cin >> n;
    cin.ignore();
    cin >> letra;

    while (cin >> aux) {
        // cout << letra << endl;
        // cin >> aux;
        // cout << letra << endl;
        if (aux == 1) {
            if (letra == 'A') {
                letra = 'B';
                // contador++;
            } else if (letra == 'B') {
                letra = 'A';
                // contador++;
            }
        } else if (aux == 2) {
            if (letra == 'B') {
                letra = 'C';
                // contador++;
            } else if (letra == 'C') {
                letra = 'B';
                // contador++;
            }
        } else if (aux == 3) {
            if (letra == 'A') {
                letra = 'C';
                // contador++;
            } else if (letra == 'C') {
                letra = 'A';
                // contador++;
            }
        }
    }

    cout << letra << endl;
    
}