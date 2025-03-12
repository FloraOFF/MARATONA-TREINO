#include <iostream>
#include <vector>
#include <cmath>
// #include <math.h>

using namespace std;

int main() {
    int n;

    cin >> n;

    vector<int> territorios(n);

    int somaTotal = 0;

    for(int i = 0; i < n; i++) {
        cin >> territorios[i];
        somaTotal += territorios[i];
    }

    int soma1 = 0;

    for(int i = 0; i < n; i++) {
        soma1 += territorios[i];

        if (soma1 == somaTotal - soma1) {
            cout << i+1 << endl;
            break;
        }
        
    }
}