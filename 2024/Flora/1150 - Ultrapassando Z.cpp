#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n = 0, qtd = 0, x = 0, z = 0, soma = 0;
    vector<int> val;
    cin >> x;
    cin >> z;
    while (z <= x){
        cin >> z;
    }

    soma = x;
    qtd = 1;
    while (soma <= z) {
        soma += x;
        qtd++;
        x++;
    }

    cout << qtd << endl;

    
    return 0;
}