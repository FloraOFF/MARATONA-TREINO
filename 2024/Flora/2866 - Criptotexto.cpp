#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int main() {
  int n;
  
  cin >> n;

  string palavra, segredo;

  for(int i = 0; i < n; i++) {
    cin >> palavra;

    reverse(palavra.begin(), palavra.end());

    for(auto s : palavra) {
      if (islower(s)) {
        segredo += s;
      }
    }

    cout << segredo << endl;

    segredo = "";
  }

  return 0;
}