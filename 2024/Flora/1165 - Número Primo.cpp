#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
#include <map>
#include <sstream>

using namespace std;

bool ehPrimo (int val, int div) {
  if (val == div) return true;

  if (val % div == 0) return false;

  return ehPrimo(val, div+1);
}

int main() {
  int n;

  cin >> n;

  vector<int> valores(n);

  for(int i = 0; i < n; i++) {
    cin >> valores[i];
  }

  for(auto v : valores) {
    if (ehPrimo(v, 2)) {
      cout << v << " eh primo" << endl;
    } else {
      cout << v << " nao eh primo" << endl;
    }
  }

  return 0;
}