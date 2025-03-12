#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
#include <map>
#include <sstream>

using namespace std;

void fibonacci (vector<int>& vetor, int n, int indice = 2) {
  if (indice >= n) {
    return;
  } 

  // cout << n << " - " << vetor[indice - 2] << " ++++ " << vetor[indice - 1]<< endl;

  int proximo = vetor[indice - 2] + vetor[indice - 1];
  // cout << proximo << endl;
  vetor.push_back(proximo);

  fibonacci(vetor, n, indice + 1);
}

int main() {
  int n;

  cin >> n;

  vector<int> valores = {0, 1};

  fibonacci(valores, n);

  for(int i = 0; i < n; i++) {
    cout << valores[i];

    if(i < n - 1 ) cout << " ";
  }

  cout << endl;

  return 0;
}