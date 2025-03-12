#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main() {
    int n, maior = 0, posicAux = 0, dia = 0, divisao = 0;
    double maiorA = 0;
   
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> divisao >> dia;
        double value = dia * log(divisao);
// cout << value << endl;
        if (value > maiorA) {
            maiorA = value;
            posicAux = i;
        }

       
    }

    cout << posicAux << endl;

    return 0;
}
