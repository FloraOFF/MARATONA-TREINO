#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
#include <map>

using namespace std;

int main() {
  string risada, rsvogal = "";
  string risadareversa = "";

  cin >> risada;

  for(auto r : risada) {
    if(r == 'a' || r == 'e' || r == 'i'|| r == 'o' || r == 'u') {
      rsvogal += r;
      risadareversa += r;
    }
  }

  // copy(rsvogal.begin(), rsvogal.end(), risadareversa.begin());
  reverse(risadareversa.begin(), risadareversa.end());

  // cout << rsvogal << " - " << risadareversa << endl;

  if (rsvogal == risadareversa) cout << 'S' << endl;
  else cout << 'N' << endl;
  
  return 0;
}
