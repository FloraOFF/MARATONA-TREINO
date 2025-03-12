#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
#include <map>

using namespace std;

string verificaFrase(string a) {
  vector<int> contagem(26);

  for(int i = 0; i < a.size(); i++) {
    if (isalpha(a[i])) a[i] = tolower(a[i]);
    contagem[a[i] - 'a'] = 1;
  }

  int qtd = 0;

  for(auto c : contagem) {
    if (c == 1) {
      qtd++;
    }
  }

  if (qtd == 26) return "frase completa";
  else if (qtd >= 13) return "frase quase completa";
  else return "frase mal elaborada";
}

int main() {
  int n;
  
  cin >> n;
  cin.ignore();

  for(int i = 0; i < n; i++) {
    string resultado = "";
    string palavra = "";
    getline(cin,palavra);

    resultado = verificaFrase(palavra);

    cout << resultado << endl;
  }
  
  return 0;
}
