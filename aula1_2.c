#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.14;

//void calc_esfera(float r, float* area, float* volume);

//int raizes(float a, float b, float c, float* x1, float* x2);

//int pares(int n, int* vet);

//void inverte (int n, int* vet);

//double avalia (double* poli, int grau, double x);

/*int main(int argc, char const *argv[])
{
    //atividade 2.1.
    
    float r;
    float* area = malloc (sizeof(float));
    float* volume = malloc (sizeof(float));

    printf("Digite o valor do raio da esfera: ");
    scanf("%f", &r);

    calc_esfera(r, area, volume); 

    return 0;
}*/

/*int main(int argc, char const *argv[])
{
    //atividade 2.2.

    float a, b, c, raiz1, raiz2;
    int raiz;
    float *x1 = &raiz1, *x2 = &raiz2;

    printf ("Digite os valores de a, b e c para a equacao ax^2 + bx + c = 0:\n");
    scanf("%f %f %f", &a, &b, &c);
    
    raiz = raizes(a, b, c, x1, x2);

    printf ("\nx1 = %.3f e x2 = %.3f", raiz1, raiz2);

    return 0;
}*/

/*int main(int argc, char const *argv[])
{
    //atividade 2.3.

    int n, i, par; 
    int *vet = malloc (sizeof(int));

    printf("Escolha um tamanho para seu vetor:\n");
    scanf("%i", &n);

    printf("Escolha os numeros presentes no vetor:\n");
    for (i = 0; i < n; i++){
        scanf("%i", &vet[i]);
    }

    par = pares(n, vet);

    printf ("O vetor possui %i numeros pares.", par);

    return 0;
}*/

/*int main(int argc, char const *argv[])
{
    //atividade 2.4.

    int n, i; 
    int *vet = malloc (sizeof(int));

    printf("Escolha um tamanho para seu vetor:\n");
    scanf("%i", &n);

    printf("Escolha os numeros presentes no vetor:\n");
    for (i = 0; i < n; i++){
        scanf("%i", &vet[i]);
    }

    inverte(n, vet);

    return 0;
}*/

/*int main(int argc, char const *argv[])
{
    //atividade 2.5

    int grau, i;
    double *poli, x;

    printf("Digite o grau do polinomio:");
    scanf("%d", &grau);

    poli = malloc((grau + 1)*sizeof(double));

    printf("Escolha um valor para x: ");
    scanf("%lf", &x);

    for (i = 0; i <= grau; i++){
        printf("Digite um valor para fazer parte do polinomio:");
        scanf("%lf", &poli[i]);
    }

    printf("\nsoma do polinomio = %.2lf\n", avalia(poli, grau, x));

    free(poli);

    return 0;
}*/



/*void calc_esfera(float r, float* area, float* volume){
    (*area) = r * r * 4 * pi;
    printf("Area da esfera: %.2f\n", *area);
    (*volume) = r * r * r * 4/3 * pi;
    printf("Volume da esfera: %.2f\n", *volume);
}*/

/*int raizes(float a, float b, float c, float* x1, float* x2){
    float delta;

    delta = b*b - 4 * a *c;
    
    if (delta >= 0){
        *x1 = (-b + sqrt(delta))/(2 * a);
        *x2 = (-b - sqrt(delta))/(2 * a);
    }

    else{
        printf("Os valores das raizes nao existem dentre os numeros reais\n");
        exit(0);
    }
}*/

/*int pares(int n, int* vet){
    int i, contador = 0;

    for (i = 0; i < n; i++){
        if (vet[i] % 2 == 0){
            contador++;
        }
    }

    return contador;
}*/

/*void inverte (int n, int* vet){
    int i, aux;
    int j = n-1;

    for (i = 0; i < n/2; i++){
            aux = vet[i];
            vet[i] = vet[j];
            vet[j] = aux;
            j--;
    }

    printf("Vetor Invertido: ");
    for(i = 0; i < n; i++){
        printf("%i", vet[i]);
    }

}*/

/*double avalia (double* poli, int grau, double x){
    int i;
    double soma = 0;
    
    for (i = 0; i <= grau; i++){
        soma += poli[i] * pow(x,1);
    }
    return soma;
}*/