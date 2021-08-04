#include "sort.h"
#include <sys/resource.h>

typedef void (*Metodo)(unsigned long *, int, unsigned long);

unsigned long gerarNumero(unsigned long valor_max)
{
    unsigned long valor = valor_max * ((double)rand() / (double)RAND_MAX);
    return valor;
}

void copia_vetor(unsigned long *origem, unsigned long *novo, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        novo[i] = origem[i];
    }
}

void Tempo_CPU_Sistema(double *seg_CPU_total, double *seg_sistema_total)
{
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

void media_tempo_sort(
    Metodo metodo,
    int n,
    unsigned long valor_max,
    unsigned long *v1,
    unsigned long *v2,
    unsigned long *v3,
    unsigned long *v4,
    unsigned long *v5)
{
    double cpu_ini_1, cpu_fin_1, sis_ini_1, sis_fin_1,
        cpu_ini_2, cpu_fin_2, sis_ini_2, sis_fin_2,
        cpu_ini_3, cpu_fin_3, sis_ini_3, sis_fin_3,
        cpu_ini_4, cpu_fin_4, sis_ini_4, sis_fin_4,
        cpu_ini_5, cpu_fin_5, sis_ini_5, sis_fin_5,
        cpu_total_1, sis_total_1,
        cpu_total_2, sis_total_2,
        cpu_total_3, sis_total_3,
        cpu_total_4, sis_total_4,
        cpu_total_5, sis_total_5;

    unsigned long vet1[n], vet2[n], vet3[n], vet4[n], vet5[n];

    copia_vetor(v1, vet1, n);
    copia_vetor(v2, vet2, n);
    copia_vetor(v3, vet3, n);
    copia_vetor(v4, vet4, n);
    copia_vetor(v5, vet5, n);

    Tempo_CPU_Sistema(&cpu_ini_1, &sis_ini_1);
    metodo(vet1, n, valor_max);
    Tempo_CPU_Sistema(&cpu_fin_1, &sis_fin_1);
    cpu_total_1 = cpu_fin_1 - cpu_ini_1;
    printf("Tempo CPU para o vetor 1: %f\n", cpu_total_1);
    sis_total_1 = sis_fin_1 - sis_ini_1;
    // printf("Tempo Sistema para o vetor 1: %f\n", sis_total_1);

    Tempo_CPU_Sistema(&cpu_ini_2, &sis_ini_2);
    metodo(vet2, n, valor_max);
    Tempo_CPU_Sistema(&cpu_fin_2, &sis_fin_2);
    cpu_total_2 = cpu_fin_2 - cpu_ini_2;
    printf("Tempo CPU para o vetor 2: %f\n", cpu_total_2);
    sis_total_2 = sis_fin_2 - sis_ini_2;
    // printf("Tempo Sistema para o vetor 2: %f\n", sis_total_2);

    Tempo_CPU_Sistema(&cpu_ini_3, &sis_ini_3);
    metodo(vet3, n, valor_max);
    Tempo_CPU_Sistema(&cpu_fin_3, &sis_fin_3);
    cpu_total_3 = cpu_fin_3 - cpu_ini_3;
    printf("Tempo CPU para o vetor 3: %f\n", cpu_total_3);
    sis_total_3 = sis_fin_3 - sis_ini_3;
    // printf("Tempo Sistema para o vetor 3: %f\n", sis_total_3);

    Tempo_CPU_Sistema(&cpu_ini_4, &sis_ini_4);
    metodo(vet4, n, valor_max);
    Tempo_CPU_Sistema(&cpu_fin_4, &sis_fin_4);
    cpu_total_4 = cpu_fin_4 - cpu_ini_4;
    printf("Tempo CPU para o vetor 4: %f\n", cpu_total_4);
    sis_total_4 = sis_fin_4 - sis_ini_4;
    // printf("Tempo Sistema para o vetor 4: %f\n", sis_total_4);

    Tempo_CPU_Sistema(&cpu_ini_5, &sis_ini_5);
    metodo(vet5, n, valor_max);
    Tempo_CPU_Sistema(&cpu_fin_5, &sis_fin_5);
    cpu_total_5 = cpu_fin_5 - cpu_ini_5;
    printf("Tempo CPU para o vetor 5: %f\n", cpu_total_5);
    sis_total_5 = sis_fin_5 - sis_ini_5;
    // printf("Tempo Sistema para o vetor 5: %f\n", sis_total_5);

    double media_cpu = (cpu_total_1 + cpu_total_2 + cpu_total_3 + cpu_total_4 + cpu_total_5) / 5;
    double media_sis = (sis_total_1 + sis_total_2 + sis_total_3 + sis_total_4 + sis_total_5) / 5;

    printf("\nTempo médio CPU: %f\n", media_cpu);
    // printf("Tempo médio Sistema: %f\n\n", media_sis);
}
