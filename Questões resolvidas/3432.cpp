#include <iostream>
#include <vector>

using namespace std;

int main () {
    int m;
    vector<int> device;
    bool sucess = true;

    for (int i = 0; i < 8; i++) {
        cin >> m;
        device.push_back(m);
    }

    for (auto d : device) {
        if (d == 9) {
            sucess = false;
            break;
        }
    }

    if (sucess) {
        cout << "S" << endl; 
    } else {
        cout << "F" << endl;
    }
    return 0;
}