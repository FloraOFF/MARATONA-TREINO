#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
#include <map>

using namespace std;

int main() {
  int n;

  cin >> n;
  cin.ignore();

  for(int i = 0; i < n; i++) {
    string frase;
    getline(cin,frase);

    size_t meio = frase.size()/2;

    string esquerda = frase.substr(0, meio + (frase.size() % 2 == 0 ? 0 : 1));
    string direita = frase.substr(meio + (frase.size() % 2 == 0 ? 0 : 1), frase.size()-1);

    reverse(esquerda.begin(), esquerda.end());
    reverse(direita.begin(), direita.end());

    cout << esquerda+direita << endl;
  }

  return 0;
}