#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a, b, c, d;

    printf("escolha quatro numeros inteiros, que serao chamados de A, B, C e D:\n");
    scanf("%i", &a);
    scanf("%i", &b);
    scanf("%i", &c);
    scanf("%i", &d);

    int* w = malloc (sizeof(int));
    int* x = malloc (sizeof(int));
    int* y = malloc (sizeof(int));
    int* z = malloc (sizeof(int));

    w = &a;
    x = &b;
    y = &c;
    z = &d;

    int i, j, k, l;

    printf("escolha quatro numeros inteiros, que serao adicionados a A, B, C e D, respectivamente:\n");
    scanf("%i", &i);
    scanf("%i", &j);
    scanf("%i", &k);
    scanf("%i", &l);

    *w = *w + i;
    *x = *x + j;
    *y = *y + k;
    *z = *z + l;

    printf("novo valor de A: %i\n", *w);
    printf("novo valor de B: %i\n", *x);
    printf("novo valor de C: %i\n", *y);
    printf("novo valor de D: %i\n", *z);

    free (w);
    free (x);
    free (y);
    free (z);


    return 0;
}
