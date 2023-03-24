#include <stdio.h>

int main(void) {
  printf("---***************************************---\n");
  printf("| ✨ Olá, bem-vindo ao jogo de adivinhação ✨ |\n");
  printf("---***************************************---\n\n");

  int numerosecreto, chute;

  numerosecreto=42;

  printf("\n Qual é o seu chute? ");
  scanf("%d", &chute);
    printf("Seu chute foi: %d", chute);
  
    /* como declarar uma variavel:
    printf("\nO número secreto é %d não conta para ninguém!!", numerosecreto);
    */

  
  return 0;
}