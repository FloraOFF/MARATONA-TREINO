#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int qtdnota = 0, qtdposic = 0;
    
    vector<int> notas;
    
    while(cin >> qtdnota >> qtdposic) {
        
        for(int i = 0; i < qtdnota; i++){
            int aux;
            cin >> aux;
            notas.push_back(aux);
        }
        
        sort(notas.rbegin(), notas.rend());
        
        for(int j = 0; j < qtdposic; j++) {
            int aux;
            cin >> aux;
            cout << notas[aux - 1] << endl;
        }
        notas.clear();
    }    
    return 0;
}