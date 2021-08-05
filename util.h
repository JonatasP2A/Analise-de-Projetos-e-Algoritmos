#ifndef UTIL_H_INCLUDED
#define UTIL_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef void (*Metodo)(unsigned long *, int, unsigned long);

unsigned long gerarNumero(unsigned long valor_max);
void media_tempo_sort(Metodo metodo, int n, unsigned long valor_max, unsigned long *v1, unsigned long *v2, unsigned long *v3, unsigned long *v4, unsigned long *v5);

#endif // UTIL_H_INCLUDED
