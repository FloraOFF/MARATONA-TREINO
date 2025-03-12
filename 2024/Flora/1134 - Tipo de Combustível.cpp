#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n = 0, alcool = 0, gasolina = 0, diesel = 0;
    vector<int> val;
    while (true){
        cin >> n;
        val.push_back(n);
        if (n == 4) break;
    }

    for (auto n : val) {
        if (n == 1) alcool += 1;
        if (n == 2) gasolina += 1;
        if (n == 3) diesel += 1;
    }


    // int div = val[1]/val[2];

    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << alcool << endl;
    cout << "Gasolina: " << gasolina << endl;
    cout << "Diesel: " << diesel << endl;

    // div >= val[0]? cout << 'S' << endl : cout << 'N' << endl;

    return 0;
}