#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, teste = 1;

    vector<int> valores;
    
    do {
        cin >> n;

        int aux;

        for (int i = 0; i < n; i++) {
            cin >> aux;
            valores.push_back(aux);
        }

        for (int i = 1; i <=n; i++) {
            if (valores[i-1] == i) {
                cout << "Teste " << teste++ << endl << i << endl << endl;
                break;
            }
        }

        valores.clear();

    } while(n > 0);

    return 0;
}