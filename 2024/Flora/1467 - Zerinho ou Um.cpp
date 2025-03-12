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

    int a, b, c;

    while(cin >> a >> b >> c) {
        if ((a == 1 && b == 1 && c == 0) || (a == 0 && b == 0 && c == 1)) cout << "C" << endl;
        else if ((a == 1 && b == 0 && c == 0) || (a == 0 && b == 1 && c == 1)) cout << "A" << endl;
        else if ((a == 1 && b == 0 && c == 1) || (a == 0 && b == 1 && c == 0)) cout << "B" << endl;
        else cout << "*" << endl;
    }

    return 0;
}