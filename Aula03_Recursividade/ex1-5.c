#include <stdio.h>

void contador_regressivo(int n)
{
    // Caso Base
    if (n == 0)
    {
        printf("FIM!\n");
        return;
    }
    // Caso Recursivo
    printf("%d\n", n);
    contador_regressivo(n - 1);
}

int somatorio(int n)
{
    // Caso Base
    if (n == 0)
    {
        return 0;
    }

    // Caso Recursivo
    int soma = n + somatorio(n - 1);
    printf("%d\n", soma);
    return soma;
}

long long potencia(int base, int exp)
{
    if (exp == 0)
        return 1;

    return base * potencia(base, exp - 1);
}

int somaVetor(int v[], int n)
{
    // Caso Base
    if (n == 0)
        return 0;

    // Caso Recursivo
    return v[n - 1] + somaVetor(v, n - 1);
}

int maiorElemento(int v[], int n)
{
    if (n == 1)
        return v[0];

    int anterior = maiorElemento(v, n - 1);
    if (v[n - 1] > anterior)
        return v[n - 1];

    return anterior;
}

int main()
{
    // contador_regressivo(5);
    // int soma = somatorio(5);
    // printf("A soma do valor 5 --> %d", soma);

    // printf("O resultado da potencia --> %lld.", potencia(2, 5));

    int v[] = {10, 20, 30, 40, 50};   // Vetor
    int n = sizeof(v) / sizeof(v[0]); // Tamanho do vetor
    printf("A soma do vetor --> %d", somaVetor(v, n));
    printf("O maior elemento do vetor --> %d\n", maiorElemento(v, n));

    return 0;
}