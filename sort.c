#include "sort.h"

void bubblesort (int *vet, int n) {
  int k, j, aux;

  for (k = 0; k < n - 1; k++) {
    // printf("\n[%d] ", k);

    for (j = 0; j < n - k - 1; j++) {
      // printf("%d, ", j);

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