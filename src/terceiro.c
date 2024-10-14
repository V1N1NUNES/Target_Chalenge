#include <stdio.h>

// int INDICE = 12, SOMA = 0, K = 1; enquanto K < INDICE faça { K = K + 1; SOMA = SOMA + K; } imprimir(SOMA);
int main()
{
    int indice = 12, soma =0, k=1;

    while(k<indice)
    {
        k = k + 1;
        soma = soma + k;
    }
    printf("A soma é: %d", soma);
    return 0;
}