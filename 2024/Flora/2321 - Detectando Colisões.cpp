#include <iostream>

using namespace std;

int main() {
    int x01, y01, x02, y02, x11, y11, x12, y12;
    bool inter = true;

    cin >> x01 >> y01 >> x02 >> y02;
    cin >> x11 >> y11 >> x12 >> y12;

    if (x01 > x12 || x02 < x11 || y01 > y12 || y02 < y11) {
        inter = false;
    } 

    if (inter) cout << 1 << endl;
    else cout << 0 << endl;

    return 0;
}