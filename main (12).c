//jogo do enforcado

#include <stdio.h>
#include <string.h>

int main() {
  char palavrasecreta [20];
  sprintf(palavrasecreta, "AMARELO");

  int acertou=0;
  int enforcou=1;

  do {
    char chute;
    printf("Insira seu primeiro chute: %c", chute);
    scanf("%c", &chute);

    for(int i=0; i< strlen(palavrasecreta); i++){
      if(palavrasecreta[i]== chute){
        printf("A posição %d tem essa letra\n", i);
      }
    }
    
  } while (!acertou && !enforcou);
    
  return 0;
}