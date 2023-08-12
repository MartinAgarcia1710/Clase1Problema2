/*
Hacer una función que reciba un vector de enteros de N elementos llamado A y un vector de enteros de M
elementos llamado B. El programa debe generar un vector de enteros llamado C (de manera dinámica) y
almacenar secuencialmente en él los elementos que se encuentran en el vector A pero no en el vector B
y viceversa. Luego, mostrar el vector C si es que contiene datos.
*/

#include <iostream>
#include "funciones.h"
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    const int TAMANIOA = 30;
    const int TAMANIOB = 10;
    int vectorA[TAMANIOA] = {};
    int vectorB[TAMANIOB] = {};
    int *vectorC;
    srand(time(0));

    vectorC = new int[TAMANIOA + TAMANIOB];

    cargarVectores(vectorA, vectorB, TAMANIOA, TAMANIOB);

    ponerCeroVectorC(vectorC, TAMANIOA, TAMANIOB);

    generarVectorC(vectorA, vectorB, vectorC, TAMANIOA, TAMANIOB);

    mostrarVectoresAyB(vectorA, vectorB, TAMANIOA, TAMANIOB);

    mostrarVectorC(vectorC, TAMANIOA, TAMANIOB);



    delete [] vectorC;
    return 0;
}
