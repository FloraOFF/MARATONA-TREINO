#include <iostream>

using namespace std;

int main(){
    int i, n; //n para numero de participantes.
    int carlos; //para votos do carlos.
    int votos;

    cin >> n; //le a qtd de participantes
    cin >> carlos;
    int ganhou = true;

    for(i = 1; i < n; i++){
        cin >> votos;        
        if(carlos < votos){
            ganhou = false;
        }
    }
    if(ganhou == true){
        cout << "S" << endl;
    }else{
        cout << "N" << endl;
    }
    return 0;
}