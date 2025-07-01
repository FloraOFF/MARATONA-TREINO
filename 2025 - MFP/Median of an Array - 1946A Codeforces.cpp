#include <bits/stdc++.h>
#include <vector>

using namespace std;

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    cin >> n;

    for(int i = 0; i < n; i++) {
        int m;

        cin >> m;
    
        vector<int> valores(m);

        for (int j = 0; j < m; j++) {
            cin >> valores[j];
        }

        sort(valores.begin(), valores.end());

        int mediana = (valores.size() + 1) / 2 - 1;

        int valor_mediana = valores[mediana];

        long long operacoes = 0;
        for (int j = mediana; j < valores.size(); j++) {
            if (valores[j] < valor_mediana + 1) operacoes += (valor_mediana + 1 - valores[j]);
        }

        cout << operacoes << endl;

        valores.clear();
    
    }

    return 0;
}