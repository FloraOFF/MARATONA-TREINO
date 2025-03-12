#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <numeric>
// #include <math.h>

using namespace std;

int main() {
    int volumeInit, n;

    cin >> volumeInit >> n;

    vector<int> volumes;

    for (int i = 0; i < n; i++) {
        int aux;
        cin >> aux;
        volumes.push_back(aux);
    }

    int volumeAtual = volumeInit;

    for(int j = 0; j < n; j++) {
        volumeAtual += volumes[j];

        if (volumeAtual > 100) volumeAtual = 100;
        else if (volumeAtual < 0) volumeAtual = 0;
    }

    cout << volumeAtual << endl;

    return 0;
}