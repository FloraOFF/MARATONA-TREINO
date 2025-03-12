#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
#include <map>

using namespace std;

int main() {
  string conteudo = "", tagI = "", tagB = "";

  while(getline(cin, conteudo)) {
    for(int i = 0; i < conteudo.size(); i++) {
      if (conteudo[i] == '_') { 
        if(tagI != "<i>") {
          conteudo[i] = '<';
          conteudo.insert(i + 1, "i>");
          tagI = "<i>";
          i++; // Avança um caractere extra para compensar a inserção
        } else if (tagI == "<i>") {
          conteudo[i] = '<';
          conteudo.insert(i + 1, "/i>");
          tagI = "";
          i++; // Avança um caractere extra para compensar a inserção
        }
      } else if (conteudo[i] == '*') {
        if (tagB != "<b>") {
          conteudo[i] = '<';
          conteudo.insert(i + 1, "b>");
          tagB = "<b>";
          i++; // Avança um caractere extra para compensar a inserção
        } else if (tagB == "<b>") {
          conteudo[i] = '<';
          conteudo.insert(i + 1, "/b>");
          tagB = "";
          i++; // Avança um caractere extra para compensar a inserção
        }
      }
    }

    cout << conteudo << endl;
  }

  return 0;
}
