#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
#include <map>

using namespace std;

int main() {
  string mensagem;
  string crib;

  cin >> mensagem;
  cin >> crib;

  int cont = 0, qtd = 0;

  bool eh;

  for (int i = 0; i <= mensagem.size() - crib.size(); ++i) {
    eh = true;
    for (int j = 0; j < crib.size(); ++j) {
        if (crib[j] == mensagem[i + j]) {
            eh = false;
            break;
        }
    }
    
    if (eh) ++qtd;
  }

  cout << qtd << endl;
}