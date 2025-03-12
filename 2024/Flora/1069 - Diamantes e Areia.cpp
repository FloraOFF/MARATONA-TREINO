#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>
#include <stack>
#include <sstream>

using namespace std;

int main() {
    int n;

    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        vector<char> pedacos;
        string diamantes;

        getline(cin, diamantes);

        for (auto d : diamantes) {
            if (d != '.') {
                pedacos.push_back(d);
            }
        }

        bool ainda = true;
        int count = 0;

        if (pedacos.empty()) {
            cout << "0" << endl;
            continue;
        } else {
            while(ainda) {
                ainda = false;
                for (int i = 0; i < pedacos.size() - 1; i++) {
                    // cout << "Lado um: " << pedacos[i] << " Lado dois: " << pedacos[i+1] << endl;
                    if (pedacos[i] == '<' && pedacos[i+1] == '>') {
                        // cout << "Entrou" << endl;
                        count++;
                        if (pedacos.size() == 2) break;
                        pedacos.erase(pedacos.begin() + i, pedacos.begin() + i + 2);
                        ainda = true;
                    }
                }
            }
        }


        cout << count << endl;

        pedacos.clear();
    }

    return 0;
}