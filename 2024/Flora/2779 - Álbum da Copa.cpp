#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <numeric>
// #include <math.h>

using namespace std;

// int mdc(int num1, int num2) {
//     int R;
//     while ((num1 % num2) > 0)  {
//         R = num1 % num2;
//         num1 = num2;
//         num2 = R;
//     }
//     return num2;
// }

int main() {
    int n, m;

    cin >> n;
    cin >> m;

    vector<int> cartas;
    
    for (int i = 0; i < m; i++) {
        int aux;
        cin >> aux;

        if (find(cartas.begin(), cartas.end(), aux) == cartas.end()) {
            cartas.push_back(aux);
            // cout << aux << endl;
        }
    }

    sort(cartas.begin(), cartas.end());

    int qtd = 0;

    for (int j = 1; j <= n; j++) {
       if (find(cartas.begin(), cartas.end(), j) == cartas.end()) qtd++;
    }
    
    cout << qtd << endl;

    // if (abs(result-n) <= 0) cout << 0 << endl;
    // else cout << abs(result-n) << endl;
}