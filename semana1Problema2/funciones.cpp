#include <iostream>
#include "funciones.h"
#include <cstdlib>
#include <ctime>

using namespace std;

void cargarVectores(int vectorA[], int vectorB[], int tamanioA, int tamanioB){
    srand(time(0));
    for(int x = 0; x < tamanioA; x++){
        vectorA[x] = (rand() % 50) +1;
    }

    for(int x = 0; x < tamanioB; x++){
        vectorB[x] = (rand() % 50) +1;
    }
}

void ponerCeroVectorC(int vectorC[],int tamanioA, int tamanioB){
    for(int x = 0; x < tamanioA+tamanioB; x++){
        vectorC[x] = 0;
    }
}

void generarVectorC(int vectorA[], int vectorB[], int vectorC[], int tamanioA, int tamanioB){
    int auxiliar = 0;
    int contador = 0;

    for(int x = 0; x < tamanioA; x++){
        contador = 0;
        for(int z = 0; z < tamanioB; z++){
            if(vectorA[x] == vectorB[z]){
                contador++;
            }
        }
        if(contador == 0){
            auxiliar = 0;
            while(auxiliar >= 0){
                if(vectorC[auxiliar] == 0){
                    vectorC[auxiliar] = vectorA[x];
                    auxiliar = -1;
                }else{
                    auxiliar++;
                }
            }
        }

    }

    for(int x = 0; x < tamanioB; x++){
        contador = 0;
        for(int z = 0; z < tamanioA; z++){
            if(vectorB[x] == vectorA[z]){
                contador++;
            }
        }
        if(contador == 0){
            auxiliar = 0;
            while(auxiliar >= 0){
                if(vectorC[auxiliar] == 0){
                    vectorC[auxiliar] = vectorB[x];
                    auxiliar = -1;
                }else{
                    auxiliar++;
                }
            }
        }

    }



}





void mostrarVectoresAyB(int vectorA[], int vectorB[], int tamanioA, int tamanioB){
    cout << "VECTOR A" << endl;
    for(int x = 0; x < tamanioA; x++){
        cout << vectorA[x] << " - ";
    }
    cout << endl;
    cout << "VECTOR B" << endl;
    for(int x = 0; x < tamanioB; x++){
        cout << vectorB[x] << " - ";
    }
}

void mostrarVectorC(int vectorC[], int tamanioA, int tamanioB){
    cout << endl << "VECTOR C" << endl;
    for(int x = 0; x < tamanioA + tamanioB; x++){
        if(vectorC[x] != 0){
            cout << vectorC[x] << " - ";

        }

    }
}
