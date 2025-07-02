#include <bits/stdc++.h>

using namespace std;

#define speed                   \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);

typedef long long ll;
typedef unsigned long long ull;
#define endl "\n"

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int32_t main() {
    speed;

    int n, m;

    cin >> n >> m;

    vector<int> valores(n);

    for (int i = 0; i < n; i++) {
        cin >> valores[i];
    }

    for (int i = 0; i < m; i++) {
        int valor_procura;

        cin >> valor_procura;

        int posic = -1, l = 0, r = n - 1;

        while(l <= r) {
            int mid = (l + r)/2;
            if (valores[mid] == valor_procura) {
                posic = mid;
                r = mid -1;
            }

            else if (valores[mid] > valor_procura) r = mid - 1;
            else l = mid + 1;
        }

        cout << posic << endl;
    }

    return 0;
}