#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
#include <map>
#include <sstream>

using namespace std;

void sequencia (vector<int>& vetor, int maior, int menor, int& soma) {
  if (menor > maior) {
    return;
  } 

  // cout << n << " - " << vetor[indice - 2] << " ++++ " << vetor[indice - 1]<< endl;

  soma += menor;
  // cout << proximo << endl;
  vetor.push_back(menor);

  // cout << soma << " - " << menor << endl;

  sequencia(vetor, maior, menor + 1, soma);
}

int main() {
  int n1, n2;

  while(true) {
  int soma = 0;
  
  cin >> n1;
  cin >> n2;

  vector<int> valores;

  if (n1 <= 0 || n2 <= 0) break;

    if (n1 > n2) {
      sequencia(valores, n1, n2, soma);
    } else {
      sequencia(valores, n2, n1, soma);
    }

    for(int i = 0; i < valores.size(); i++) {
      cout << valores[i] << " ";
    }

    cout << "Sum=" << soma << endl;
  
  }

  return 0;
}