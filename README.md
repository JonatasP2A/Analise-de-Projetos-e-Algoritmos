# Comparação de tempo entre os métodos sort
<p align="end">Grupo: Jônatas Alves e Kayalla Lino

### Métodos incluídos no projeto
<ul>
  <li>Insertion sort</li>
  <li>Bubble sort</li>
  <li>Merge sort</li>
  <li>Quick sort</li>
  <li>Método das caixas</li>
</ul>

### Variações
<ul>
  <li>Variando tamanho do vetor</li>
    <p>Para alterar o tamanho do vetor, basta alterar o valor de N no arquivo 'main.c'</p>
  <li>Variando o valor máximo do número gerado</li>
    <p>Para aumentar o intervalo de números possíveis na geração de um número aleatório, basta alterar o valor de valor_max no arquivo 'main.c'</p>
</ul>


### 🎲 Rodando o código

```bash
# Clone este repositório
$ git clone <https://github.com/JonatasP2A/Analise-de-Projetos-e-Algoritmos.git>

# Acesse a pasta do projeto no terminal/cmd
$ cd Analise-de-Projetos-e-Algoritmos

# Execute
$ gcc sort.c util.c main.c -o main
$ ./main
```

### Resultados
<p>Para cada método de ordenação, foram feitas 5 execuções em vetores de tamanho N com valores gerados aleatoriamente. Após feita a execução de ordenação, é coletado o tempo
feito uma média do tempo de execução dos 5 vetores. Os valores de média de cada resultado foram adicionados nos gráficos para melhor comparação. Estes encontrados no arquivo
<a href="https://github.com/JonatasP2A/Analise-de-Projetos-e-Algoritmos/blob/master/sort.h">graficos</a></p>
