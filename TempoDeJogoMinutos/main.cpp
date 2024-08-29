#include <iostream>
using namespace std;

int main(){
    int horaInicio, horaFim, minutoInicio, minutoFim;
    int horasTotais;
    cin >> horaInicio >> minutoInicio >> horaFim >> minutoFim;

    int inicioMinutosTotais = horaInicio * 60 + minutoInicio;
    int fimMinutosTotais = horaFim * 60 + minutoFim;

    if (inicioMinutosTotais < fimMinutosTotais){
        horasTotais = fimMinutosTotais - inicioMinutosTotais;
    }

    else if (inicioMinutosTotais == fimMinutosTotais){
        horasTotais = 24 * 60;
    } else{
        horasTotais = ((24 * 60) - inicioMinutosTotais) + fimMinutosTotais;
    }

    cout << "O JOGO DUROU " << horasTotais/60 << " HORA(S) E " << horasTotais%60 << " MINUTO(S)" << endl;

    return 0;
}