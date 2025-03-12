#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <stack>
#include <utility>
#include <sstream>
#include <iomanip>

using namespace std;

int main() {
    int n;

    cout << fixed << setprecision(2);

    cin >> n;

    for(int i = 0; i < n; i++) {
        int qtd1 = 0, qtd2 = 0;
        vector<pair<string, double>> produtos;
        double resultado = 0.0;
        
        cin >> qtd1;

        for(int j = 0; j < qtd1; j++) {
            string tipo = "";
            double valor = 0.0;

            cin >> tipo >> valor;

            produtos.push_back(make_pair(tipo, valor));
        }

        cin >> qtd2;

        for(int x = 0; x < qtd2; x++) {
            string tipo;
            int qtd;

            cin >> tipo >> qtd;

            for (auto p : produtos) {
                if (tipo == p.first) {
                    resultado += qtd*p.second;

                    // cout << tipo << endl;
                }
            }
        }

        cout << "R$ " << resultado << endl;
    }


    return 0;
}