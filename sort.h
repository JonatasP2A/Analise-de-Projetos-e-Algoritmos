#ifndef SORT_H_INCLUDED
#define SORT_H_INCLUDED

#include <stdio.h>
// #include <conio.h>
#include <stdlib.h>

int gerarNumero(int valorMax);
void bubblesort(int *v, int n);
void mergesort(int *v, int n);
void metodocaixas(int *vet, int n, int max_value);
void insertionsort(int *vet, int n);
void quicksort(int *v, int n);
void Tempo_CPU_Sistema(double *seg_CPU_total, double *seg_sistema_total);

#endif // SORT_H_INCLUDED
