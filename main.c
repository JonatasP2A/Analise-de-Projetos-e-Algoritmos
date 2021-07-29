#include "sort.h"

int main()
{
  // CORREÇÕES nºos aleatórios e sequências:
  //n = quantidade de dados na seuqência
  // primeiro, terão 5 sequências de n valores (ex. 10)
  // depois, terão 5 sequências de outro n valores (ex. 50, 100, 150, 200, 250...)
  // o intervalo dos números será: [1, MAX] = intervalo onde serão gerados os numeros aleatórios
  // ex: MAX = 1.000.000

  // TODO:
  // - Ajustar a geração de sequências e nºs aleatórios, conforme as correções acima;
  // - Entregar o notion + gráficos com a análise dos algoritmos;
  // - Colocar explicação verbal da Complexidade;
  // - Vídeo explicando o trabalho;
  // - Enviar até DOMINGO o .zip com o README com a orientação de como rodar o código + o código + o vídeo + a análise (em pdf?)

  double s_CPU_final_1;
  double s_CPU_inicial_1;
  double s_total_inicial_1;
  double s_total_final_1;
  double s_CPU_final_2;
  double s_CPU_inicial_2;
  double s_total_inicial_2;
  double s_total_final_2;
  double s_CPU_final_3;
  double s_CPU_inicial_3;
  double s_total_inicial_3;
  double s_total_final_3;
  double s_CPU_final_4;
  double s_CPU_inicial_4;
  double s_total_inicial_4;
  double s_total_final_4;
  double s_CPU_final_5;
  double s_CPU_inicial_5;
  double s_total_inicial_5;
  double s_total_final_5;
  int i,
      valorMax = 10000,
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

  Tempo_CPU_Sistema(&s_CPU_inicial_1, &s_total_inicial_1);
  quicksort(vet1, valorMax);
  Tempo_CPU_Sistema(&s_CPU_final_1, &s_total_final_1);
  printf ("Tempo de CPU total 1 = %f\n", s_CPU_final_1 - s_CPU_inicial_1);

  Tempo_CPU_Sistema(&s_CPU_inicial_2, &s_total_inicial_2);
  quicksort(vet2, valorMax * 2);
  Tempo_CPU_Sistema(&s_CPU_final_2, &s_total_final_2);
  printf ("Tempo de CPU total 2 = %f\n", s_CPU_final_2 - s_CPU_inicial_2);
  
  Tempo_CPU_Sistema(&s_CPU_inicial_3, &s_total_inicial_3);
  quicksort(vet3, valorMax * 3);
  Tempo_CPU_Sistema(&s_CPU_final_3, &s_total_final_3);
  printf ("Tempo de CPU total 3 = %f\n", s_CPU_final_3 - s_CPU_inicial_3);

  Tempo_CPU_Sistema(&s_CPU_inicial_4, &s_total_inicial_4);
  quicksort(vet4, valorMax * 4);
  Tempo_CPU_Sistema(&s_CPU_final_4, &s_total_final_4);
  printf ("Tempo de CPU total 4 = %f\n", s_CPU_final_4 - s_CPU_inicial_4);

  Tempo_CPU_Sistema(&s_CPU_inicial_5, &s_total_inicial_5);
  quicksort(vet5, valorMax * 5);
  Tempo_CPU_Sistema(&s_CPU_final_5, &s_total_final_5);
  printf ("Tempo de CPU total 5 = %f\n", s_CPU_final_5 - s_CPU_inicial_5);

  // for (int j = 0; j < valorMax; j++)
  // {
  //   printf("%d ", vet1[j]);
  // }

  // printf("\n");

  // for (int k = 0; k < valorMax * 2; k++)
  // {
  //   printf("%d ", vet2[k]);
  // }

  // printf("\n");

  // for (int k = 0; k < valorMax * 3; k++)
  // {
  //   printf("%d ", vet3[k]);
  // }

  // printf("\n");

  // for (int k = 0; k < valorMax * 4; k++)
  // {
  //   printf("%d ", vet4[k]);
  // }

  // printf("\n");

  // for (int k = 0; k < valorMax * 5; k++)
  // {
  //   printf("%d ", vet5[k]);
  // }

  // printf("\n");

  // printf ("Custo = %d\n", custo);

  return 0;
}
