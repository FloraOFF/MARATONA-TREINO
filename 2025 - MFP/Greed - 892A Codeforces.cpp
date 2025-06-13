#include <bits/stdc++.h>
#include <vector>

using namespace std;

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int64_t n, soma_volumes = 0, soma_maxima = 0;

    cin >> n;

    if (n == 2) {
        cout << "YES" << endl;
    } else {
        vector<int> volumes(n);
        vector<int> qtd_maxima(n);

        for (int i = 0; i < n; i++) cin >> volumes[i];
        for (int i = 0; i < n; i++) cin >> qtd_maxima[i];

        sort(qtd_maxima.rbegin(), qtd_maxima.rend());

        for(auto v : volumes) soma_volumes += v;

        soma_maxima = qtd_maxima[0] + qtd_maxima[1];

        if (soma_maxima < soma_volumes) cout << "NO" << endl;
        else cout << "YES" << endl;
    }  

    return 0;
}