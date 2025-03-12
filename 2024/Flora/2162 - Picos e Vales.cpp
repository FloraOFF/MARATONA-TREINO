#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <numeric>
// #include <math.h>

using namespace std;

int main() {
    int n;
    bool padrao = true;

    cin >> n;

    vector<int> alturas;

    for(int i = 0; i < n; i++) {
        int aux;
        cin >> aux;
        alturas.push_back(aux);
    }

    // cout << alturas[0] << endl;
    // for (int i = 1; i < n - 1; i++)

    if (alturas.size() <= 2) {
        if (alturas[0] == alturas[1]) padrao = false;
    } else {
        for (int i = 1; i < n - 1; i++) {
            // if (i + 1 < n) cout << alturas[i-1] << " primeiro " << alturas[i] << " segundo " << alturas[i+1] << " terceiro " << endl; 
            if (alturas[i] > alturas[i - 1] && alturas[i] > alturas[i + 1]) {
                // Se há um pico após um pico, continue para a próxima iteração
                continue;
            } else if (alturas[i] < alturas[i - 1] && alturas[i] < alturas[i + 1]) {
                // Se há um vale após um vale, continue para a próxima iteração
                continue;
            } else {
                // Se não é nem pico nem vale, então a paisagem não segue o padrão
                padrao = false;
                break; // Interrompe o loop
            }
        }

    }

    // cout << alturas[n-1] << " segundo " << endl; // Imprime o último elemento

    if (padrao) cout << 1 << endl;
    else cout << 0 << endl;

    return 0;
}