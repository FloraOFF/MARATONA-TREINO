#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
#include <map>

using namespace std;

int main() {
  int n;

  while(true) {
    cin >> n;

    if (n == 0) break;

    vector<string> conjuntos(n);

    for(int i = 0; i < n; i++) {
      cin >> conjuntos[i];
    }

    // sort(conjuntos.begin(), conjuntos.end());

    // string aux = conjuntos[0];
    bool bom = true;

    for(int i = 0; i < n; i++) {
      for(int j = 0; j < n; j++) {
        if (conjuntos[i].substr(0, conjuntos[j].size()) == conjuntos[j] && i != j) {
          bom = false;
          break;
        } 
      }
      
      if (!bom) break;
    }

    if (bom) cout << "Conjunto Bom" << endl;
    else cout << "Conjunto Ruim" << endl;

    conjuntos.clear();
  }
}