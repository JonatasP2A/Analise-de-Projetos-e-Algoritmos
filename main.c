#include "sort.h"

int main()
{
  int i,
      N = 100,
      valorMax = 10000,
      vet1[N],
      vet2[N],
      vet3[N],
      vet4[N],
      vet5[N],
      media;

  double seg_CPU_total_1, seg_sistema_total_1,
      seg_CPU_total_2, seg_sistema_total_2,
      seg_CPU_total_3, seg_sistema_total_3,
      seg_CPU_total_4, seg_sistema_total_4,
      seg_CPU_total_5, seg_sistema_total_5;

  for (i = 0; i < N; i++)
  {
    vet1[i] = gerarNumero(valorMax);
    vet2[i] = gerarNumero(valorMax);
    vet3[i] = gerarNumero(valorMax);
    vet4[i] = gerarNumero(valorMax);
    vet5[i] = gerarNumero(valorMax);
  }

  Tempo_CPU_Sistema(&seg_CPU_total_1, &seg_sistema_total_1);
  mergesort(vet1, valorMax);
  Tempo_CPU_Sistema(&seg_CPU_total_1, &seg_sistema_total_1);

  Tempo_CPU_Sistema(&seg_CPU_total_2, &seg_sistema_total_2);
  mergesort(vet2, valorMax);
  Tempo_CPU_Sistema(&seg_CPU_total_2, &seg_sistema_total_2);

  Tempo_CPU_Sistema(&seg_CPU_total_3, &seg_sistema_total_3);
  mergesort(vet3, valorMax);
  Tempo_CPU_Sistema(&seg_CPU_total_3, &seg_sistema_total_3);

  Tempo_CPU_Sistema(&seg_CPU_total_4, &seg_sistema_total_4);
  mergesort(vet4, valorMax);
  Tempo_CPU_Sistema(&seg_CPU_total_4, &seg_sistema_total_4);

  Tempo_CPU_Sistema(&seg_CPU_total_5, &seg_sistema_total_5);
  mergesort(vet5, valorMax);
  Tempo_CPU_Sistema(&seg_CPU_total_5, &seg_sistema_total_5);

  media += (seg_CPU_total_1 + seg_CPU_total_2 + seg_CPU_total_3 + seg_CPU_total_4 + seg_CPU_total_5) / N;
  printf("Média: %f", media);

  return 0;
}
