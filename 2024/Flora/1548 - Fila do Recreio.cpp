#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int Ncasos = 0, Malunos = 0, trocas = 0;
  cin >> Ncasos;

  vector<int> resultados;

  for (int c = 0; c < Ncasos; c++) {
      int qtd = 0;
      cin >> Malunos;
      vector<int> vAntes(Malunos), vDepois(Malunos);

      for (int d = 0; d < Malunos; d++) {
          cin >> vAntes[d];
          vDepois[d] = vAntes[d];
      }

      sort(vDepois.rbegin(), vDepois.rend());

      for (int d = 0; d < Malunos; d++) {
        if (vAntes[d] == vDepois[d])
            qtd++;
      }
      
      cout << qtd << endl;
      
      vDepois.clear();
      vAntes.clear();
  }

    return 0;
}