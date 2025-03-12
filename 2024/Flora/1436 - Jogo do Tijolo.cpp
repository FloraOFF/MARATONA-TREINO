#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int findCapitao(vector<int> vetor, int inicio, int fim, int jovens, int velhos, int qtd) {
    if (inicio == fim) return vetor[0];

    int meio = (inicio + fim) / 2;

    // for(int i = inicio; i <= fim; i++) {
    if (qtd < vetor[meio]) findCapitao(vetor, inicio, fim, jovens+1, velhos, qtd+1);
    else if (qtd > vetor[meio]) findCapitao(vetor, inicio, fim, jovens, velhos+1, qtd+1);
    // }

    if (jovens == velhos) return vetor[meio];
}

int main() {
    int n, qtdI = 0, qtd, velhos, jovens;

    cin >> n;

    vector<int> idades;
    vector<int> capitao;

    for(int i = 0; i < n; i++) {
        cin >> qtdI;
        int cap = 0;

        for(int j = 0; j < qtdI; j++) {
            int aux;
            cin >> aux;
            idades.push_back(aux);
        }

        cap = findCapitao(idades, 0, idades.size() - 1, jovens = 0, velhos = 0, qtd = 0);
        cout << "Case " << i+1 << ": " <<  cap << endl;
        idades.clear();
    }

    return 0;
}