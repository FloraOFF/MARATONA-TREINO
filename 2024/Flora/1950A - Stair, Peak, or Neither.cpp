#include <iostream>

using namespace std;

#define speed                   \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);

typedef long long ll;
typedef unsigned long long ull;
#define endl "\n"

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main () {
    speed;

    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int a = 0, b = 0, c = 0;

        cin >> a >> b >> c;

        if ((a < b) && (b < c)) cout << "STAIR" << endl;
        else if ((a < b) && (b > c)) cout << "PEAK" << endl;
        else cout << "NONE" << endl;
    }
    return 0;
}