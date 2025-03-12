#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> quantidades;
    for (int i = 0; i < n; i++) {
        int numero;
        cin >> numero;
        quantidades.push_back(numero);
    }

    sort(quantidades.begin(), quantidades.end());

    int aux = quantidades[0];
    int qtd = 1;

    for (int i = 1; i <= quantidades.size(); i++) {
        if (aux == quantidades[i]) {
            aux = quantidades[i];
            qtd++;
        } else {
            cout << aux << " aparece " << qtd << " vez(es)"<< endl; 
            qtd = 1;
            aux = quantidades[i];
        }

        

    }

    return 0;
}