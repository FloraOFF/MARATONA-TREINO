#include <bits/stdc++.h>
#include <vector>

using namespace std;

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, aux = 0;

    string operacao = "";

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> operacao;

        if (operacao == "++X" || operacao == "X++") aux++;
        else aux --;
    }

    cout << aux << endl;

    
    return 0;
}