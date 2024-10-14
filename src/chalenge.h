#ifndef CHALENGE.h
#define CHALENGE.h

//bibliotecas 
#include <stdio.h>
#include <math.h>
#include <malloc.h>

//protótipos de funções
void alocation(int num);
void verify();
void sequency(int num);



//funções
void menu()//menu para interação com usuário
{   
    int num;

    printf("Informe um número:\n");
    scanf("%d", &num);

    sequency(num);
}


void sequency(int num)//função que gera a função de fibonacci do tamanho de num informado
{
    int a = 0 , b = 1;
    int next = a + b ;
    int somas = 1;

    while(next <= num)
    {
        printf("Sequecy: %d + %d = %d\n", a, b, next);

        if(next == num)
        {
            printf("\nO número informado: %d , faz parte da sequencia de Fibonacci!\n\n%d + %d = %d depois de %d ciclos de soma.\n\n", num,  a, b, next, somas);

            return;
        }

        a = b; 
        b = next;
        next = a + b;

        somas++;
    }
    printf("O número informado %d não faz parte da sequencia de Fibonacci.\n", num);
    
    return;
}

#endif