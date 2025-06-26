#include <bits/stdc++.h>
#include <vector>

using namespace std;

int verificarNumeros (vector<int>& v) {
    unordered_map<int, int> freq;

    int maior_valor = -1;
    for (int val : v) {
        freq[val]++;
        if (freq[val] >= 3) {
            maior_valor = val; // já achou um valor com 3+ ocorrências
            break;
        }
    }

    return maior_valor;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int m;

        cin >> m;

        vector<int> valores(m);

        for (int j = 0; j < m; j++) {
            cin >> valores[j];
        }

        cout << verificarNumeros(valores) << endl;;

        valores.clear();
    }

    return 0;
}