#include <iostream>
#include "funciones.h"
#include <cstdlib>
#include <ctime>

using namespace std;

void cargarVectores(int vectorA[], int vectorB[], int tamanioA, int tamanioB){
    srand(time(0));
    for(int x = 0; x < tamanioA; x++){
        vectorA[x] = (rand() % 15) +1;
    }

    for(int x = 0; x < tamanioB; x++){
        vectorB[x] = (rand() % 15) +1;
    }
}

void generarVectorC(int vectorA[], int vectorB[], int vectorC[]){


}
