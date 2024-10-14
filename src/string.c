#include <stdio.h>
#include <string.h>

//declarações
#define TAM 600 // modificavel de acordo com a frase que quiser verificar

//protótipos de funções 
void clean_buffer();
void remove_newline(char* frase);
int contagem(char* frase);

//funções
void clean_buffer()
{
    int clean;

    while((clean = getchar()) != '\n' && clean != EOF);
}
void remove_newline(char* frase)
{
    int i =0;

    while(frase[i] != '\0')
    {
        if(frase[i] == '\n')
        {
            frase[i] = '\0';
        }
        i++;
    }
}
int contagem(char* frase)
{
    int i =0, quant=0;

    while(frase[i] != '\0')
    {
        if(frase[i] == 'a')
        {
            quant++;
        }
        i++;
    }

    return quant;
}
    

int main()
{
    char frase[TAM], quantidade;

    printf("Digite uma frase qualquer: \n");
    fgets(frase, sizeof(frase), stdin);
    remove_newline(frase);

    quantidade = contagem(frase);

    printf("Sua frase possui %d 'a'.\n\n", quantidade);

    return 0;

}