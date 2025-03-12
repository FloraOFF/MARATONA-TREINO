#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

struct debenture {
  int devedor;
  int credor;
  int valor;
};

int main () {
  int bancos, debentures;

  while(true) {
    cin >> bancos >> debentures;

    if (bancos == 0 && debentures == 0) break;

    vector<int> reservas(bancos);

    for (int i = 0; i < bancos; i++) {
      cin >> reservas[i];
    }

    vector<debenture> Debs(debentures);

    for (int j = 0; j < debentures; j++) {
      cin >> Debs[j].devedor >> Debs[j].credor >> Debs[j].valor;
    }

    for (int j = 0; j < debentures; j++) {
      // cout << "Antes das alteracoes" << endl << reservas[Debs[j].devedor] << " " << reservas[Debs[j].credor] << endl;
      // cout << " reserva credor " << reservas[Debs[j].credor - 1] << " credor " << Debs[j].credor << " antes " << reservas[Debs[j].devedor - 1] << " reserva devedor " << " Devedor " << Debs[j].devedor << endl;

      reservas[Debs[j].devedor - 1] -= Debs[j].valor; 
      reservas[Debs[j].credor - 1] += Debs[j].valor;

      // cout << " reserva credor " << reservas[Debs[j].credor - 1] << " credor " << Debs[j].credor << " depois " << reservas[Debs[j].devedor - 1] << " reserva devedor " << " Devedor " << Debs[j].devedor << endl;
      
      // cout << "Depois das alteracoes" << endl << reservas[Debs[j].devedor] << " " << reservas[Debs[j].credor] << endl;
      
    }  

    bool saldoNegativo = false;

    for (auto r : reservas) {
      if (r < 0) {
        saldoNegativo = true;
        break;
      }
    }

    if (saldoNegativo) cout << "N" << endl;
    else cout << "S" << endl;
  }

  return 0;
}