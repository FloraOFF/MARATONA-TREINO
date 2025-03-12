#include <iostream>
#include <vector>
#include <cmath>
// #include <math.h>

using namespace std;

int main() {
    int n;

    cin >> n;

    vector<int> bombas(n);

    for (int i = 0; i < n; i++) {
        cin >> bombas[i];
    }

    for (int i = 0; i < n; i++) {
        int qtd = 0;
        if (i > 0 && bombas[i-1] == 1) {
            qtd++;
        }
        if (bombas[i] == 1) {
            qtd++;
        }
        if (i < n - 1 && bombas[i+1] == 1) {
            qtd++;
        }
        
        cout << qtd << endl;
    }

}