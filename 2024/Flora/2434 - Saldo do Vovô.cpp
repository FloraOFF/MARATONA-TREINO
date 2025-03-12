#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, saldo = 0, aux = 0;

    cin >> n >> saldo;

    vector<int> saldos;
    for (int i = 0; i < n; i++) {
        cin >> aux;
        saldo += aux;
        saldos.push_back(saldo);
        // cout << saldo << endl;
    }

    int menor = saldos[0];
    for (auto s : saldos) {
        if (s < menor) {
            menor = s;
        }
    }

    cout << menor << endl;
}