#include <bits/stdc++.h>
#include <vector>

using namespace std;

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, min_valor = 0, aux = 0;

    cin >> n >> m;

    vector<int> drives(n);

    for(int i = 0; i < n; i++) {
        cin >> drives[i];
    }

    sort(drives.rbegin(), drives.rend());

    int qtd = 0;

    for(int i = 0; i < n; i++) {
        if (drives[i] >= m) {
            aux = drives[i];
            qtd = 1;
            break;
        } else {
            aux += drives[i];
            qtd++;

            if (aux >= m) break;

        }
    }

    cout << qtd << endl;    

    return 0;
}