#include <iostream>
using namespace std;
    //Se declaran las variables
int calcularDaño(int placas, int dañoBala, string tipoBala, bool &critico) {
    int dañoRecibido = dañoBala;
    //Se usa el if para indicar que hacer con las variables si se cumple la condición
    if (tipoBala == "normal" || tipoBala == "explosiva") {
        dañoRecibido -= placas;
    } else if (tipoBala == "perforante") {
        (dañoRecibido -= placas / 2);
    }

    if (dañoBala > 50 && placas < 20) {
        dañoRecibido *= 2; //Golpe Crítico
        critico=true;
    } else {
        critico=false;
    }

    return dañoRecibido;

}
    //Aca se le solicitan los datos al usuario para calcular el daño final siguiendo las reglas establecidas.
int main () {
    int placas, dañoBala;
    string tipoBala;
    bool critico;

    cout << "Ingrese el tipo de bala (normal, perforante, explosiva): ";
    cin >> tipoBala;

    if (tipoBala == "normal") {
        cout << "La bala normal tiene un rango de daño desde 20 hasta 60" << endl;
    } else if (tipoBala == "perforante") {
        cout << "La bala perforante tiene un rango de daño desde 20 hasta 60" << endl;
    }    else if (tipoBala == "explosiva") {
            cout << "La bala explosiva tiene un rango de daño desde 40 hasta 120" << endl;
    }

    cout << "Ingrese el daño deseado (que este entre los rangos establecidos): ";
    cin >> dañoBala;
    cout << "Ingrese la cantidad de placas: ";
    cin >> placas;

    int dañoFinal = calcularDaño(placas, dañoBala, tipoBala, critico);
    //Se dan los resultados y se acaba el proceso.
    if(critico) {
        cout << "¡DAÑO CRÍTICO! " << endl;
        cout << "El daño recibido es: " << dañoFinal << endl;
    } else {
        cout << "El daño recibido es: " << dañoFinal << endl;
    }

    return 0;
}