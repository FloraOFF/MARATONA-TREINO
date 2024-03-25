#include <iostream>
#include <vector>

using namespace std;

int main () {
    int n;
    while (true) {
        int integrantes = 0, m = 0, soma = 0, media = 0, aux = 0;

        cin >> integrantes;

        if (integrantes == 0) {
            break;
        }

        vector<int> notas;

        for (int i = 0; i < integrantes; i++) {
            cin >> m;
            notas.push_back(m);
            soma += m;
        }

        media = soma/integrantes;

        if (soma%integrantes == 0) {
            for (int j = 0; j < integrantes; j++) {
                if (notas[j] != media) {
                    if (notas[j] > media) {
                        aux += notas[j] - media;
                    } else if (notas[j] < media){
                        aux += media - notas[j];
                    }
                }

                //cout << aux << endl;
                
            }

        } else {
            aux = -1;
        }

        if (aux < 0) {
            cout << aux << endl;
        } else {
            cout << (aux/2)+1 << endl;
        }

    }

    return 0;
}