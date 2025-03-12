#include <iostream>
#include <vector>
#include <cmath>
// #include <math.h>

using namespace std;

int main() {
    int comprimento, distPedagio, valorKm, valorPedagio;
    int valorPercorrido, qtdPedagio, pedagio;

    cin >> comprimento >> distPedagio;
    cin >> valorKm >> valorPedagio;

    valorPercorrido = valorKm*comprimento;

    qtdPedagio = comprimento/distPedagio;

    pedagio = qtdPedagio*valorPedagio;

    // cout << valorPercorrido << endl << qtdPedagio << endl << pedagio << endl;

    cout << pedagio+valorPercorrido << endl;
}