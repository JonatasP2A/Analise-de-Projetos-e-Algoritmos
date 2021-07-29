#include "sort.h"

int main()
{
  int i,
      valorMax = 10,
      vet1[valorMax],
      vet2[valorMax * 2],
      vet3[valorMax * 3],
      vet4[valorMax * 4],
      vet5[valorMax * 5];

  for (i = 0; i < valorMax; i++)
  {
    vet1[i] = gerarNumero(valorMax);
  }

  for (i = 0; i < valorMax * 2; i++)
  {
    vet2[i] = gerarNumero(valorMax * 2);
  }

  for (i = 0; i < valorMax * 3; i++)
  {
    vet3[i] = gerarNumero(valorMax * 3);
  }

  for (i = 0; i < valorMax * 4; i++)
  {
    vet4[i] = gerarNumero(valorMax * 4);
  }

  for (i = 0; i < valorMax * 5; i++)
  {
    vet5[i] = gerarNumero(valorMax * 5);
  }

  mergesort(vet1, valorMax);
  mergesort(vet2, valorMax * 2);
  mergesort(vet3, valorMax * 3);
  mergesort(vet4, valorMax * 4);
  mergesort(vet5, valorMax * 5);

  for (int j = 0; j < valorMax; j++)
  {
    printf("%d ", vet1[j]);
  }

  printf("\n");

  for (int k = 0; k < valorMax * 2; k++)
  {
    printf("%d ", vet2[k]);
  }

  printf("\n");

  for (int k = 0; k < valorMax * 3; k++)
  {
    printf("%d ", vet3[k]);
  }

  printf("\n");

  for (int k = 0; k < valorMax * 4; k++)
  {
    printf("%d ", vet4[k]);
  }

  printf("\n");

  for (int k = 0; k < valorMax * 5; k++)
  {
    printf("%d ", vet5[k]);
  }

  printf("\n");

  bubblesort(vet1, valorMax);
  insertionsort(vet2, valorMax);

  for (int j = 0; j < valorMax; j++)
  {
    printf("%d ", vet1[j]);
  }

  printf("\n");

  for (int g = 0; g < valorMax; g++)
  {
    printf("%d ", vet2[g]);
  }

  return 0;
}
