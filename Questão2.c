
#include <stdio.h>
#include <math.h>

int main(){
  //Declarando variaveis
  int C5 = 5, C4 = 4, numero, resultado, resultado1;
  double raiz, raiz1;
  //entrada de numero
  printf("Digite um numero: ");
  scanf("%d", &numero);
  //utilizando equação para determinar se o numero inserido pertence
  //a sequência de Fibonacci.
  resultado = (C5 * (numero * numero) + 4);
  resultado1 = (C5 * (numero * numero) - 4);
  //de pois de passar pela equação se o resultado for um quadrado perfeito
  //então pertence a sequência
  raiz = sqrt(resultado);
  raiz1 = sqrt(resultado1);
  //condição para verificar se é ou não quadrado perfeito
  if( raiz == (int)raiz || raiz1 == (int)raiz1){
    printf("%d, pertence a sequencia de fibonacci! : )", numero);
  }else{
    printf("%d, não pertence a sequencia de fibonacci! : (", numero);
  }

}