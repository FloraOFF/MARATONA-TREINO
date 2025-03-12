#include <iostream>
#include <vector>
#include <cmath>
// #include <math.h>

using namespace std;

int main() {
    int pulo, canos, n;
    bool win = true;

    cin >> pulo >> canos;

    vector<int> pularCanos;

    for (int i = 0; i < canos; i++) {
        cin >> n;
        pularCanos.push_back(n);
    }

    for (int j = 0; j < canos - 1; j++) {
        // cout << pularCanos[j] << endl << pularCanos[j+1] << endl;
        int diferencaCano = abs(pularCanos[j+1]-pularCanos[j]);

        // cout << diferencaCano << endl;

        if ((diferencaCano > pulo) || (diferencaCano < 0)) {
            // cout << "Aqui" << endl;
            win = false;
            break;
        }
    }

    if (win) cout << "YOU WIN" << endl;
    else cout << "GAME OVER" << endl;
    
}