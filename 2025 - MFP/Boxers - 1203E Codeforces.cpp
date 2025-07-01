#include <bits/stdc++.h>
#include <vector>

using namespace std;

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    cin >> n;

    vector<int> boxeadores(n);
    
    for(int i = 0; i < n; i++) {
        cin >> boxeadores[i];
    }

    set<int> pesos;

    sort(boxeadores.begin(), boxeadores.end());

    for (int i = 0; i < boxeadores.size(); i++) {
        if (boxeadores[i] - 1 > 0 && pesos.count(boxeadores[i] - 1) == 0) {
            pesos.insert(boxeadores[i] - 1);
        } else if (pesos.count(boxeadores[i]) == 0) {
            pesos.insert(boxeadores[i]);
        } else if (pesos.count(boxeadores[i] + 1) == 0) {
            pesos.insert(boxeadores[i] + 1);
        }
    }
    
    cout << pesos.size() << endl;

    return 0;
}