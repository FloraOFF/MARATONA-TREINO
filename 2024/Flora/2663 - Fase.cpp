#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <numeric>
// #include <math.h>

using namespace std;

int main() {
    int n, vagas;

    cin >> n;
    cin >> vagas;

    vector<int> candidatos;

    for(int i = 0; i < n; i++) {
        int aux;
        cin >> aux;
        candidatos.push_back(aux);
    }

    sort(candidatos.rbegin(), candidatos.rend());

    int count = 0;

    for(int j = 0; j < vagas; j++) {
        count++;
    }

    int ultima_vaga = candidatos[vagas - 1];

    int j = vagas;
    while(j < n && candidatos[j] == ultima_vaga) {
        count++;
        j++;
        // if (j + 1 < vagas && candidatos[j] == candidatos[j+1]) {
        //     count++;
        // } else {
        //     break;
        // }
    }

    cout << count << endl;

    return 0;
}