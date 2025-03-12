#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n; //quantidade de prÃ©dios;
    cin >> n; 
    vector <int> predios(n);
    int max = 0;
    for(int i=0; i<n; i++) cin >> predios[i]; 
    //em cada posiÃ§Ã£o de predios, temos a altura mÃ¡xima de dois amigos que moram 
    //no mesmo prÃ©dio: um no Ãºltimo andar e outro no tÃ©rreo.

    for(int i=0; i<n; i++){
        int aux = predios[i]; //aux tem a distÃ¢ncia entre o amigo que mora no primeiro andar
        //do predio i e o amigo que mora no tÃ©rreo do mesmo prÃ©dio.

        for(int j=i+1; j<n; j++){
            if(predios[i] + (j-i) + predios[j] > aux) aux = predios[i] + (j-i) + predios[j];
        }
        if(aux > max) max = aux;
    }
    cout << max << endl;
    return 0;
}