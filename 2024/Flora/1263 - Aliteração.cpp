#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
#include <map>

using namespace std;

int main() {
  string conteudo = "";
  
  while(getline(cin, conteudo)) {
    int cont = 0, total = 0;
    string palavra = "", aux = "";

    for(int i = 0; i < conteudo.size(); i++) {
      if (!isspace(conteudo[i])) {
        palavra += tolower(conteudo[i]);
      } else {
        if (!aux.empty() && aux[0] == palavra[0]) {
          cont = 1;
        } else {
          total += cont;
          cont = 0;
        }
        // cout << aux << " - " << palavra << endl;
        aux = palavra;
        palavra = "";
        // cout << palavra << endl;
      }
    }

    if (!palavra.empty() && aux[0] == palavra[0]) {
      cont = 1;
    }
    
    total += cont;
    cout << total << endl;

    // cout << conteudo << endl;
  }

  return 0;
}
