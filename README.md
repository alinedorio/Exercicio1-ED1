# trabalhos-UFES

# Exercicio 1

Revisão de ponteiros em C
Use alocação dinâmica sempre que  possível!!! 

Exercícios:  

1) No arquivo aula1_1.c: Elabore um programa que declare 4 variáveis do tipo inteiro e 4 do  tipo ponteiro para inteiro e faça com que as variáveis ponteiro 
apontem para as variáveis do tipo inteiro. Coloque comandos que permitam modificar os valores das variáveis inteiras  através das variáveis ponteiro. 
Faça a simulação passo-a-passo para visualizar o que está acontecendo em cada linha do programa. 

2) No arquivo aula1_2.c: Implemente funções em C para cada um dos problemas abaixo  (todas as funções devem estar em um único arquivo aula1_2.c). 
Para cada uma das  funções, implemente uma função main diferente (comente as outras para conseguir  rodar): 

  2.1) Implemente uma função que calcule a área da superfície e o volume de uma esfera  2 4πr de raio r. A área da superfície e o volume são dados, 
  respectivamente, por e  4 / 3 3 πr. Essa função deve obedecer ao seguinte protótipo: void calc_esfera(float r, float* area, float* volume); 
  
  2.2) Implemente uma função que calcule as raízes de uma equação do segundo grau, do  tipo ax2 + bx + c = 0. Essa função deve obedecer o seguinte protótipo:
  int raizes (float a, float b, float c, float* x1, float* x2); 
  
  2.3) Implemente uma função que receba como parâmetro um vetor de números inteiros (vet) de tamanho n e retorne quantos números pares estão armazenados nesse
  vetor. Essa função deve obedecer ao protótipo: int pares (int n, int* vet); 
  
  2.4) Implemente uma função que receba como parâmetro um vetor de números inteiros  (vet) de tamanho n e inverta a ordem dos elementos armazenados nesse vetor.
  Essa função deve obedecer ao protótipo: void inverte (int n, int* vet); 
  
  2.5) Implemente uma função que permita a avaliação de polinômios. Cada polinômio é  definido por um vetor que contém seus coeficientes. Por exemplo, o 
  polinômio de  grau 2, 3x2 + 2x+ 12, terá um vetor de coeficientes igual a vet[] = {12, 2, 3}. A  função deve obedecer o seguinte protótipo: 
  double avalia(double* poli, int grau, double x); 
