#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <stack>
#include <utility>
#include <sstream>
#include <iomanip>

using namespace std;

int main() {
    int n, m;

    cin >> n >> m;

    vector<int> voltas(n);
    vector<int> copyVoltas(n);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            int aux;
            cin >> aux;

            voltas[i] += aux;
        }
    }

    copy(voltas.begin(), voltas.end(), copyVoltas.begin());

    sort(copyVoltas.begin(), copyVoltas.end());

    int primeiro = copyVoltas[0];
    int segundo = copyVoltas[1];
    int terceiro = copyVoltas[2];

    int pos1 = -1, pos2 = -1, pos3 = -1;
    for (int i = 0; i < voltas.size(); i++) {
        if (voltas[i] == primeiro && pos1 == -1) {
            pos1 = i+1;
        } else if (voltas[i] == segundo && pos2 == -1) {
            pos2 = i+1;
        } else if (voltas[i] == terceiro && pos3 == -1) {
            pos3 = i+1;
        }
    }

    cout << pos1 << endl << pos2 << endl << pos3 << endl;

    return 0;
}