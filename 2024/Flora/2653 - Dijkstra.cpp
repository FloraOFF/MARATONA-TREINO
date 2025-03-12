#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <stack>
#include <utility>
#include <sstream>

using namespace std;

int main() {
    string joia;
    vector<string> joias;
    int contador;

    while(cin >> joia) {
        if (find(joias.begin(), joias.end(), joia) == joias.end()) joias.push_back(joia);
    }

    cout << joias.size() << endl;


    return 0;
}