#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <stack>
#include <utility>
#include <sstream>

using namespace std;

int main() {
    int n, m;

    cin >> n >> m;

    vector<pair<string,int>> par;

    for(int i = 0; i < n; i++) {
        string tipo = "";
        int valor;

        cin >> tipo >> valor;

        par.push_back(make_pair(tipo, valor));
    }

    for(int j = 0; j < m; j++) {
        int contador = 0;
        string texto = "";

        while(getline(cin, texto)) {

            if (texto == ".") break;
            istringstream iss(texto); 
            string palavra;

            while (iss >> palavra) {
                for(auto p : par) {
                    if (palavra == p.first) {
                        contador += p.second;  
                    }
                }
            }
        }
        cout << contador << endl;
    }

    return 0;
}