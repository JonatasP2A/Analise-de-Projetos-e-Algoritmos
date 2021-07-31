#include "sort.h"
#include "util.h"

int main()
{
  int i,
      N = 50,
      valor_max = 1000000,
      vet1[N],
      vet2[N],
      vet3[N],
      vet4[N],
      vet5[N],
      media;
  for (i = 0; i < N; i++)
  {
    vet1[i] = gerarNumero(valor_max);
    vet2[i] = gerarNumero(valor_max);
    vet3[i] = gerarNumero(valor_max);
    vet4[i] = gerarNumero(valor_max);
    vet5[i] = gerarNumero(valor_max);
  }

  printf("\n- Mergesort\n\n");
  media_tempo_sort(mergesort, N, valor_max, vet1, vet2, vet3, vet4, vet5);
  printf("\n- Quicksort\n\n");
  media_tempo_sort(quicksort, N, valor_max, vet1, vet2, vet3, vet4, vet5);
  printf("\n- Bubblesort\n\n");
  media_tempo_sort(bubblesort, N, valor_max, vet1, vet2, vet3, vet4, vet5);
  printf("\n- Insertionsort\n\n");
  media_tempo_sort(insertionsort, N, valor_max, vet1, vet2, vet3, vet4, vet5);
  printf("\n- Método das caixas\n\n");
  media_tempo_sort(metodocaixas, N, valor_max, vet1, vet2, vet3, vet4, vet5);

  return 0;
}
