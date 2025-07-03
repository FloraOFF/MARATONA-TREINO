#include <bits/stdc++.h>
#include <vector>

using namespace std;

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, dollar, bananas, aux = 0;

    cin >> n >> dollar >> bananas;

    for (int i = 1; i <= bananas; i++) {
        aux += i;
    }

    aux = n * aux;

    if (aux > dollar) {
        cout << aux - dollar << endl;
    } else {
        cout << 0 << endl;
    }

    
    return 0;
}