#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
#include <map>

using namespace std;

int main() {
  string link;

  cin >> link;

  for(int i = 0; i < link.size(); i++) {
    if(isupper(link[i])) link[i] = tolower(link[i]);
  }

  if (link.find("zelda") != string::npos) cout << "Link Bolado" << endl;
  else cout << "Link Tranquilo" << endl;
  
  return 0;
}
