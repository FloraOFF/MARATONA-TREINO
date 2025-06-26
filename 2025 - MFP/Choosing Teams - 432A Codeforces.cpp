#include <bits/stdc++.h>
#include <vector>

using namespace std;

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;

    cin >> n >> m;

    vector<int> times(n);

    for (int i = 0; i < n; i++) { cin >> times[i]; }

    int aptos = 0;

    for (int i = 0; i < n; i++) {
        if (times[i] + m <= 5) {
            aptos++;
        }
    }

    int times_possiveis = aptos / 3;

    cout << times_possiveis << endl;
    

    return 0;
}