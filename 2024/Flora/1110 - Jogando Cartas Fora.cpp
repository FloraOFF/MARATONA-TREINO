#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>
#include <stack>

using namespace std;

int main() {
    int n;

    while(true) {
        stack<int> pilha;
        vector<int> restante;
        vector<int> fora;

        cin >> n;

        if (n == 0) break;

        for(int i = n; i > 0; i--) {
            pilha.push(i);
        }

        for(int j = 0; pilha.size() > 0; j++) {
            restante.push_back(pilha.top());
            pilha.pop();
        }

        while(restante.size() > 1) {
            fora.push_back(restante[0]);
            restante.erase(restante.begin());

            restante.push_back(restante[0]);
            restante.erase(restante.begin());
        }

        cout << "Discarded cards: ";
        for(int j = 0; j < fora.size(); j++) {
            cout << fora[j];

            if (j != fora.size() - 1) {
                cout << ", ";
            }
        }

        cout << endl;

        cout << "Remaining card: " << restante[0] << endl;

    }


    return 0;
}