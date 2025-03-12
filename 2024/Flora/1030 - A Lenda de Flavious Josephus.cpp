#include <iostream>
#include <vector>
#include <cmath>
// #include <math.h>

using namespace std;

int main() {
    int n, valor, saltos, caso = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> valor >> saltos;

        vector<int> valores;

        for (int j = 1; j < valor+1; j++){
            valores.push_back(j);
        }

        int index = 0;

        while (valores.size() > 1) {
            index = (index + saltos - 1) % valores.size();
            valores.erase(valores.begin() + index);
        }

        caso++;

        for(auto v: valores) {
            cout << "Case " << caso << ": " << v << endl;
        }
    }
}