#ifndef SORT_H_INCLUDED
#define SORT_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

void bubblesort(unsigned long *v, int n, unsigned long max_value);
void mergesort(unsigned long *v, int n, unsigned long max_value);
void metodocaixas(unsigned long *vet, int n, unsigned long max_value);
void insertionsort(unsigned long *vet, int n, unsigned long max_value);
void quicksort(unsigned long *v, int n, unsigned long max_value);

#endif // SORT_H_INCLUDED
