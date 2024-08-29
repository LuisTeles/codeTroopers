#include <iostream>
using namespace std;

int main(){
    int inicio, fim;
    int hora = 0;
    cin >> inicio >> fim;
    
    inicio < fim ? hora = fim - inicio : hora = (24 - inicio) + fim;
    
    cout << "O JOGO DUROU " << hora << " HORA(S)" << endl;

    return 0;
}