#include <bits/stdc++.h>
#include <vector>

using namespace std;

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    cin >> n;

    int total = 2 * n;

    vector<int> valores(total);
    for (int i = 0; i < total; i++) cin >> valores[i];

    sort(valores.begin(), valores.end());

    int soma1 = 0, soma2 = 0;
    for (int i = 0; i < n; ++i) {
        soma1 += valores[i];
        soma2 += valores[i + n];
    }

    if (soma1 == soma2) {
        cout << -1 << endl;
    } else {
        for (int i = 0; i < total; ++i) {
            cout << valores[i] << " ";
        }
        cout << endl;
    }

    return 0;
}