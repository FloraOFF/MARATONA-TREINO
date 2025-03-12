#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main () {
  int n;

  while(cin >> n) {
    vector<int> minutos;
    
    int aux = 0;

    for (int i = 0; i < n; i++) {
      cin >> aux;
      minutos.push_back(aux);
    }

    sort(minutos.begin(), minutos.end());

    int qtd = n / 2;

    int mesmoTempo = minutos[qtd] - minutos[qtd - 1];

    cout << qtd << " " << mesmoTempo << endl;
    // for(auto t : tempo) {
    //   cout << t << endl;
    // }

    minutos.clear();
  }

  return 0;
}