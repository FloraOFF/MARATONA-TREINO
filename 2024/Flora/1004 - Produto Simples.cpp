#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
#include <map>
#include <sstream>

using namespace std;

int produ (int n1, int n2) {
  if (n1 == 0 || n2 == 0) return 0;
  else if (n1 == 1) return n2;
  else if (n1 > 0)
    return n2 + produ(n1 - 1, n2);
  else
    return -n2 + produ(n1 + 1, n2);
}

int main() {
  int n1, n2;

  cin >> n1;
  cin >> n2;

  int result = produ(n1,n2);

  cout << "PROD = " << result << endl; 

  return 0;
}