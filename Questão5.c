#include <stdio.h>
#include <string.h>

int main(){
    char palavra[100], palavra_reverse[100];
    int cont;
    int p, a;
    //entrada de string
    printf("Escreva uma string:");
    scanf("%s", &palavra);

    cont = strlen(palavra);//contagem de quantos caracteres tem na string
    a = cont-1;//defino o limite de quantas vezes o for repete

    for(p = 0; p<cont; p++)
    {
            palavra_reverse[p] = palavra[a];//passo caractere por caractere para outra variavel
            palavra_reverse[p+1] = '\0';//defino o final da string para evitar falhas
            a--;//decrementador
    }
    printf("\nO reversor de %s e %s", palavra, palavra_reverse);//saida
    
}