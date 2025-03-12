#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>

using namespace std;

double raizQuadrada(int n) {
    if (n == 0) return 1.0;
    else {
        // return 1.0 + 1.0 / (2.0 + raizQuadrada(n - 1.0));
        return 1.0 + 1.0 / (1.0 + raizQuadrada(n - 1));
    }
}

int main() {
    int n;

    cout << fixed << setprecision(10);

    cin >> n;

    double raiz = raizQuadrada(n);
    cout << fixed << raiz << endl;

    return 0;
}