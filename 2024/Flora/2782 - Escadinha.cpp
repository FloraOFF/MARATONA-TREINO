#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <numeric>
// #include <math.h>

using namespace std;

int main() {
    int n;

    cin >> n;

    vector<int> sequencias;

    for (int i = 0; i < n; i++) {
        int aux;
        cin >> aux;
        sequencias.push_back(aux);
    }

    if (n <= 2){
        cout << 1 << endl;
        return 0;
    }

    int qtd = 0;

    for (int i = 0; i < n - 2; i++) {

        if((sequencias[i] - sequencias[i+1]) != (sequencias[i+1] - sequencias[i+2])){
            qtd++;
        }
        
    }

    cout << qtd + 1 << endl;

    return 0;
}