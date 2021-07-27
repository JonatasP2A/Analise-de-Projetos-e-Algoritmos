#include "sort.h"

void bubblesort (int *vet, int n) {
  int k, j, aux;

  for (k = 0; k < n - 1; k++) {
    for (j = 0; j < n - k - 1; j++) {
      if (vetor[j] > vetor[j + 1]) {
        aux = vetor[j];
        vetor[j] = vetor[j + 1];
        vetor[j + 1] = aux;
      }
    }
  }
}

void quicksort(int *vet, int n) {
  if (n <= 1) return;
  int x = vet[0], a = 1, b = n-1;

  do {
    while ((a < n) && (vet[a] <= x)) a++;
    while (vet[b] > x) b--;
    if (a <= b) {
      int temp = vet[a];
      vet[a] = vet[b];
      vet[b] = temp;
      a++;
      b--;
    }
  } while (a <= b);

  vet[0] = vet[b];
  vet[b] = x;
  quicksort(vet, b);
  quicksort(&vet[b+1], n-b-1);
}

void Tempo_CPU_Sistema(double *seg_CPU_total, double *seg_sistema_total) {
  long seg_CPU, seg_sistema, mseg_CPU, mseg_sistema;
  struct rusage ptempo;

  getrusage(0, &ptempo);

  seg_CPU = ptempo.ru_utime.tv_sec;
  mseg_CPU = ptempo.ru_utime.tv_usec;
  seg_sistema = ptempo.ru_stime.tv_sec;
  mseg_sistema = ptempo.ru_stime.tv_usec;

 *seg_CPU_total = (seg_CPU + 0.000001 * mseg_CPU);
 *seg_sistema_total = (seg_sistema + 0.000001 * mseg_sistema);
}