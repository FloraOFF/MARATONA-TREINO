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

#define speed                   \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);

typedef long long ll;
typedef unsigned long long ull;
#define endl "\n"

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() {
    speed;

    int n;

    while(true) {
        cin >> n;

        vector<int> jogadas;

        if (n == 0) break;

        for(int i = 0; i < n; i++) {
            int aux;
            cin >> aux;
            jogadas.push_back(aux);
        }

        int maria = 0, joao = 0;

        for (auto j : jogadas) {
            if (j == 1) joao++;
            else if (j == 0) maria++;
        }

        cout << "Mary won " << maria << " times and John won " << joao << " times" << endl;

        jogadas.clear();
    }

    return 0;
}