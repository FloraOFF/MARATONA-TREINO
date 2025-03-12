#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
#include <map>

using namespace std;

bool ehConsoante(char c) {
  c = tolower(c);
  return (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u');
}

int main() {
  int n;

  cin >> n;
  cin.ignore();

  for(int i = 0; i < n; i++) {
    bool facil = true;
    int count = 0;
    string sobrenome;
    getline(cin, sobrenome);

    for(int j = 0; j < sobrenome.size(); j++) {
      if(ehConsoante(sobrenome[j])){
        count++;
        if (count >= 3) {
          facil = false;
          break;
        }
      } else {
        count = 0;
      }
    }

    if (facil) cout << sobrenome << " eh facil" << endl;
    else cout << sobrenome << " nao eh facil" << endl;
    
  }

  return 0;
}
