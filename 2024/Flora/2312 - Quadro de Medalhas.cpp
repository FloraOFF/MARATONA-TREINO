#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

struct Pais {
  string nome;
  int ouro;
  int prata;
  int bronze;
};

bool ordemMedalhas(Pais a, Pais b) {
  if (a.ouro != b.ouro) {
    return a.ouro > b.ouro;
  }

  if (a.ouro == b.ouro) {
    if (a.prata != b.prata) {
      return a.prata > b.prata;
    }
  }

  if ((a.ouro == b.ouro) && (a.prata == b.prata)) {
    if (a.bronze != b.bronze) {
      return a.bronze > b.bronze;
    }
  }

  if ((a.ouro == b.ouro) && (a.prata == b.prata) && (a.bronze == b.bronze)) {

    if (a.nome != b.nome) {
      return a.nome < b.nome;
    } else {
      return false;
    }
  }
}

int main () {
  int n;

  cin >> n;

  Pais paises[n];

  for(int i = 0; i < n; i++) {
    cin >> paises[i].nome >> paises[i].ouro >> paises[i].prata >> paises[i].bronze;
  }

  sort(paises, paises + n, ordemMedalhas);

  for (int i = 0; i < n; i++) {
    cout << paises[i].nome << " " << paises[i].ouro << " " << paises[i].prata << " " << paises[i].bronze << endl;
  }


  return 0;
}