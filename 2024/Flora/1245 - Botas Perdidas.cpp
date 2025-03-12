#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <stack>
#include <utility>
#include <sstream>
#include <iomanip>
#include <map>

using namespace std;

#define speed                   \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);

typedef long long ll;
typedef unsigned long long ull;
#define endl "\n"

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

bool ordenaPar (const pair<int, char>& a, const pair<int, char>& b) {return a.first < b.first;}

int main() {
    speed;

    int n;

    while(cin >> n) {
        map<int, int> direito, esquerdo;

        for (int i = 0; i < n; ++i) {
            int tamanho;
            char lado;
            cin >> tamanho >> lado;

            if (lado == 'D') {
                direito[tamanho]++;
            } else {
                esquerdo[tamanho]++;
            }
        }

        int total_pares = 0;
        for (const auto& par : direito) {
            int tamanho = par.first;
            int num_direitos = par.second;
            int num_esquerdos = esquerdo[tamanho];
            total_pares += min(num_direitos, num_esquerdos);
        }

        cout << total_pares << endl;
    }

    return 0;
}