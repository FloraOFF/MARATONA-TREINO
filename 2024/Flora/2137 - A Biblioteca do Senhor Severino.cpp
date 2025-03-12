#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int n;

    while(cin >> n) {
        vector<string> codigos(n);

        for(int i = 0; i < n; i++) {
            cin >> codigos[i];
        } 

        sort(codigos.begin(), codigos.end());

        for(auto c : codigos) {
            cout << c << endl;
        }
    }

    return 0;
}