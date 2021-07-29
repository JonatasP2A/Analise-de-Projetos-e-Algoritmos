#include "sort.h"

int gerarNumero(int valorMax)
{
  int valor = rand();

  valor = valor % valorMax + 1;
  return valor;
}

void bubblesort(int *v, int n)
{
  int k, j, aux;

  for (k = 0; k < n - 1; k++)
  {
    for (j = 0; j < n - k - 1; j++)
    {
      if (v[j] > v[j + 1])
      {
        aux = v[j];
        v[j] = v[j + 1];
        v[j + 1] = aux;
      }
    }
  }
}

void mergesort(int *v, int n)
{
  int *c = malloc(sizeof(int) * n);
  sort(v, c, 0, n - 1);
  free(c);
}

void sort(int *v, int *c, int i, int f)
{
  if (i >= f)
    return;

  int m = (i + f) / 2;

  sort(v, c, i, m);
  sort(v, c, m + 1, f);

  if (v[m] <= v[m + 1])
    return;

  merge(v, c, i, m, f);
}

void merge(int *v, int *c, int i, int m, int f)
{
  int z, iv = i, ic = m + 1;

  for (z = i; z <= f; z++)
    c[z] = v[z];

  z = i;

  while (iv <= m && ic <= f)
  {
    if (c[iv] <= c[ic])
      v[z++] = c[iv++];
    else
      v[z++] = c[ic++];
  }

  while (iv <= m)
    v[z++] = c[iv++];

  while (ic <= f)
    v[z++] = c[ic++];
}

void metodocaixas(int *vet, int n, int max_value) {
  int caixas[n];
  for (j = 1; j <= max_value; j++) {
    caixas[j] = 0;
  }
  for (k = 0; k < n; k++) {
    caixas[vet[k]] += 1;
  }
  int posicao = 0;
  for (l = 0; l < max_value; l++){
    while caixas[l] != 0 {
      caixas[l] -= 1;
      vet[k] = l;
      k += 1;
    }
  }
}

// void Tempo_CPU_Sistema(double *seg_CPU_total, double *seg_sistema_total) {
//   long seg_CPU, seg_sistema, mseg_CPU, mseg_sistema;
//   struct rusage ptempo;

//   getrusage(0, &ptempo);

//   seg_CPU = ptempo.ru_utime.tv_sec;
//   mseg_CPU = ptempo.ru_utime.tv_usec;
//   seg_sistema = ptempo.ru_stime.tv_sec;
//   mseg_sistema = ptempo.ru_stime.tv_usec;

//  *seg_CPU_total = (seg_CPU + 0.000001 * mseg_CPU);
//  *seg_sistema_total = (seg_sistema + 0.000001 * mseg_sistema);
// }
