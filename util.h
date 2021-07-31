#ifndef UTIL_H_INCLUDED
#define UTIL_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef void (*Metodo)(int *, int, int);

int gerarNumero(int valor_max);
void media_tempo_sort(Metodo metodo, int n, int valor_max, int *v1, int *v2, int *v3, int *v4, int *v5);

#endif // UTIL_H_INCLUDED
