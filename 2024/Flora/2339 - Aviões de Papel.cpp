#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> val(3);
    for(int i = 0; i < 3; i++) {
        cin >> val[i];
    }

    int div = val[1]/val[2];

    // cout << div << endl;

    div >= val[0]? cout << 'S' << endl : cout << 'N' << endl;

    return 0;
}