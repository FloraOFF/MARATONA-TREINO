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

    unsigned long long int n;

    while(true) {
        cin >> n;

        if (n == -1) break;

        if (n == 0) {
            cout << 0 << endl;
        } else {
            cout << n - 1 << endl;
        }
    }

    return 0;
}