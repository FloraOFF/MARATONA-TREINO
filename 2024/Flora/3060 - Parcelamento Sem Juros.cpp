#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main() {
    int valor, parcela;
    
    cin >> valor >> parcela;

    float valorParcela = valor%parcela;

    if (valor%parcela == 0) {
        for(int i = 0; i < parcela; i++) {
            cout << (int)valor/parcela << endl;
        }
    } else {
        for (int j = 0; j < valor%parcela; j++) {
            cout << (valor/parcela)+1 << endl;
        } 
        
        for (int x = 0; x < (parcela - (valor%parcela)); x++) {
            cout << floor(valor/parcela) << endl;
        }

    }
}