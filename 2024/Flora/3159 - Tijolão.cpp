#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
#include <map>

using namespace std;

int main() {
  map<char, string> teclas = {
    {'a', "2"},
    {'b', "22"},
    {'c', "222"},
    {'d', "3"},
    {'e', "33"},
    {'f', "333"},
    {'g', "4"},
    {'h', "44"},
    {'i', "444"},
    {'j', "5"},
    {'k', "55"},
    {'l', "555"},
    {'m', "6"},
    {'n', "66"},
    {'o', "666"},
    {'p', "7"},
    {'q', "77"},
    {'r', "777"},
    {'s', "7777"},
    {'t', "8"},
    {'u', "88"},
    {'v', "888"},
    {'w', "9"},
    {'x', "99"},
    {'y', "999"},
    {'z', "9999"}
  };

  int n;

  cin >> n;
  cin.ignore();

  string mensagem, msn;

  for(int i = 0; i < n; i++) {
    getline(cin, mensagem);

    for(int j = 0; j < mensagem.size(); j++) {
      // if (isupper(mensagem[j])) msn += '#';

      if (isupper(mensagem[j])) {
        msn += '#';
        mensagem[j] = tolower(mensagem[j]);
      }

      if (isspace(mensagem[j])) {
        msn += '0';
      }

      if (!msn.empty() && teclas[mensagem[j]].find(msn.back()) != string::npos && msn.back()) {
        msn += '*';
      }

      msn += teclas[mensagem[j]];

      // cout << teclas[mensagem[j]] << endl;
    }

    cout << msn << endl;

    msn = "";
  }
  return 0;
}