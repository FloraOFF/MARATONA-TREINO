#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int n;

    while(cin >> n) {
        vector<int> virus(n);

        for(int i = 0; i < n; i++) {
            cin >> virus[i];
        }

        sort(virus.begin(), virus.end());

        int letalidade = 0;

        for (int j = 0; j < n / 2; j++) {
            letalidade += virus[n - j - 1] - virus[j];
        }

        cout << letalidade << endl;

        virus.clear();
    }

    return 0;
}