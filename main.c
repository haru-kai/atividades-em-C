//lista estatica
#include <stdio.h>
#include <Lista.h>

int main(void){
//um ponteiro q so aramazena o lugar onde esta o endereço
Lista *l;
aluno alunoX, alunoY, alunoZ;

//alno.oDadoQColocando é o endereço de um dado colocado dentro de uma lista
alunoX.matricula= 101010;
alunoY.matricula= 202020;
alunoZ.matricula= 303030;

//uma funcao vai criar essa lista porem precisa ter uma referencia
//como q faz uma referencia, oq e uma referencia
l = criarLista();
printf("Tamanho Inicial %d \n", tamanhoLista(l));

inserirLista(l, alunoX);
inserirLista(l, alunoY);
inserirLista(l, alunoZ);
printf("Tamanho inicial %d \n", tamanhoLista);

exibirLista(l);

}