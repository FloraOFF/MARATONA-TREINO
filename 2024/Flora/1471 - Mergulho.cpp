#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
// #include <math.h>

using namespace std;

int main() {
    int placas = 0, n = 0;
    while(cin >> placas >> n) {

        vector<int> faltantes;
        int aux;
        for (int i = 0; i < n; i++) {
            cin >> aux;
            faltantes.push_back(aux);
        }

        sort(faltantes.begin(), faltantes.end());

        vector<int> faltou;

        for(int j = 1; j <= placas; j++) {
            if (find(faltantes.begin(), faltantes.end(), j) == faltantes.end()) {
                faltou.push_back(j);
            }
        }

        if (faltou.empty()) {
            cout << "*" << endl;
        } else {
            for(auto f:faltou) {
                cout << f << " ";
            }
            cout << endl;
        }


    }
}