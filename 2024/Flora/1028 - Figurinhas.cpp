#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int MDC(int a, int b, int comun = 1, int divisor = 2) {
    if (a == 1 || b == 1) return comun;
    else {
        if (a % divisor == 0 && b % divisor == 0) {
            return MDC(a / divisor, b / divisor, comun * divisor, divisor);
        } 
        else if (a % divisor == 0) {
            return MDC(a / divisor, b, comun, divisor);
        }
        else if (b % divisor == 0) {
            return MDC(a, b / divisor, comun, divisor);
        } 
        else {
            return MDC(a, b, comun, divisor + 1);
        }
    }
}

int main() {
    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int a, b;

        cin >> a >> b;

        int resultado = MDC(a, b);

        cout << resultado << endl;
    }

    return 0;
}