#include <iostream>
#include <vector>

using namespace std;

int main () {
  int n, t, acerto = 0;
  vector<int> portas;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> t;
    portas.push_back(t);
  }

  for (int i = 0; i < n; i++) {
    if (portas[i] != 1) {
      acerto++;
    }
        
  }

  cout << acerto << endl;

  return 0;
}