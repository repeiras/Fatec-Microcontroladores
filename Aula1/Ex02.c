#include <stdio.h>

int main(void) {
  //Variaveis para armazenar numeros inteiros
  int altura;
  //Altura - é uma ordem para colocar algo dentro de uma variavel
  altura = 184;
  //Exibição do valor da Variável %i serve para declarar que é um numero inteiro.
  printf("O valor da minha altura é: %i cm \n", altura);
  //Variavel para armazenar um numero real
  float peso; //Numero real de 32 bits
  double imc; //numnero real de 64 bits
  peso = 105.47;
  //Ajuste da unidade da altura
  float altura_metros;
  altura_metros = (float)altura / 100.0;
  imc = peso / (altura_metros * altura_metros);
  printf("valor do IMC para altura %i e peso %f: %lf\n",altura, peso, imc);
  return 0;
}
