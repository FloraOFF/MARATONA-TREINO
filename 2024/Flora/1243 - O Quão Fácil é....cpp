#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
#include <map>
#include <sstream>

using namespace std;

bool isWordValid(const string& word) {
  if (word.size() == 1 && word[0] == '.') {
    return false;
  }

  for (size_t i = 0; i < word.size(); ++i) {
    if (!isalpha(word[i]) && !(word[i] == '.' && i == word.size() - 1)) {
      return false;
    }
  }

  return true;
}

int main() {
  string frase;

  while(getline(cin, frase)) {
    istringstream iss(frase);
    string palavra;
    vector<string> palavras;

    while(iss >> palavra) {
      palavras.push_back(palavra);
    }

    int qtdLetras = 0, qtdPalavras = 0;

    for (const auto& p : palavras) {
      // cout << p << endl;
      if (isWordValid(p)) {
        for(char c : p) {
          if (!(c == '.')) qtdLetras += 1;
        }
        qtdPalavras += 1;
      } 
    }

    int media = (qtdPalavras == 0) ? 0 : (qtdLetras / qtdPalavras);

    // cout << media << endl;

    if (media <= 3.0) cout << 250 << endl;
    else if (media >= 4.0 && media <= 5.0) cout << 500 << endl;
    else if (media >= 6.0) cout << 1000 << endl;
  }

  return 0;
}