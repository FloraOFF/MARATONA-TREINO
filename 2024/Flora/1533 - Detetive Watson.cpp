#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main () {
  int nSuspeitos, suspeito2;

  while(true) {
    cin >> nSuspeitos;

    if (nSuspeitos == 0) 
      break;

    vector<int> suspeitos(nSuspeitos);
    vector<int> orderSuspect(nSuspeitos);

    for (int i = 0; i < suspeitos.size(); i++) {
      cin >> suspeitos[i];
    }

    for (int j = 0; j < suspeitos.size(); j++) {
      orderSuspect[j] = suspeitos[j];
    }

    sort(orderSuspect.begin(), orderSuspect.end());

    suspeito2 = orderSuspect[orderSuspect.size() - 2];

    for (int x = 0; x < suspeitos.size(); x++) {

      if (suspeitos[x] == suspeito2) {
        cout << x + 1 << endl;
        break;
      }
    }
  }
  return 0;
}