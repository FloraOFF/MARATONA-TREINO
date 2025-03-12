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
    int qtdlingua = 0;
    string lingua = "";
    vector<string> linguas;
    cin >> qtdlingua;

    for(int j = 0; j < qtdlingua; j++) {
      cin >> lingua;
      linguas.push_back(lingua);
    }

    string idiomaFalado = "";

    for(int i = 0; i < linguas.size() - 1; i++) {
      if(linguas[i] == linguas[i+1]) {
        idiomaFalado = linguas[i];
      } else {
        idiomaFalado = "ingles";
        break;
      }
    }

    cout << idiomaFalado << endl;
  }

  return 0;
}
