#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void cargarVectores(int vectorA[], int vectorB[], int tamanioA, int tamanioB);
void ponerCeroVectorC(int vectorC[],int tamanioA, int tamanioB);
void generarVectorC(int vectorA[], int vectorB[], int vectorC[], int tamanioA, int tamanioB);
void mostrarVectoresAyB(int vectorA[], int vectorB[], int tamanioA, int tamanioB);
void mostrarVectorC(int vectorC[], int tamanioA, int tamanioB);
#endif // FUNCIONES_H_INCLUDED
