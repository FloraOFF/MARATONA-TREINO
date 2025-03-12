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

  for(int i = 0; i < n; i++) {
    string palavra = "";
    cin >> palavra;

    if (palavra.size() == 3) {
      if (palavra[0] == 'O' && palavra[1] == 'B') palavra = "OBI";
      else if (palavra[0] == 'U' && palavra[1] == 'R') palavra = "URI";
    }

    cout << palavra;

    if (i != n - 1) {
      cout << " ";
    }
  }

  cout << endl;
  
  return 0;
}
