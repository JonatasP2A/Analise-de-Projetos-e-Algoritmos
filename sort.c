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

void mergesort(int *v, int n)
{
  int *c = malloc(sizeof(int) * n);
  sort(v, c, 0, n - 1);
  free(c);
}

void metodocaixas(int *vet, int n, int max_value) {
  int caixas[max_value];
  for (int j = 0; j < max_value; j++) {
    caixas[j] = 0;
  }
  for (int k = 0; k < n; k++) {
    caixas[vet[k] - 1] += 1;
  }
  int posicao = 0;
  for (int l = 0; l < max_value; l++){
    while (caixas[l] != 0) {
      caixas[l] -= 1;
      vet[posicao] = l + 1;
      posicao += 1;
    }
  }
}

void insertionsort(int *vet, int n){
  int i, key, j;
  for (i = 1; i < n; i++) {
    key = vet[i];
    j = i - 1;
    while (j >= 0 && vet[j] > key) {
      vet[j + 1] = vet[j];
      j = j - 1;
    }
    vet[j + 1] = key;
  }
}

void quicksort(int *v, int n)
{
  if (n <= 1)
    return;
  int x = v[0], a = 1, b = n - 1;

  do
  {
    while ((a < n) && (v[a] <= x))
      a++;
    while (v[b] > x)
      b--;
    if (a <= b)
    {
      int temp = v[a];
      v[a] = v[b];
      v[b] = temp;
      a++;
      b--;
    }
  } while (a <= b);

  v[0] = v[b];
  v[b] = x;
  quicksort(v, b);
  quicksort(&v[b + 1], n - b - 1);
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
