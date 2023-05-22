//armazenamento dos dados da lista.h
#include <stdio.h>
#include <stdlib.h>
#include <Lista.h>


        //convertendo de ponteiro para lista
        Lista* criarLista(){
        Lista *l= (Lista*)malloc(sizeof(Lista));
        if(l!=NULL){
            l->qtd= 0;
        }
        //so retorna o ponteiro
        return l;
            }

//Inserindo um elemento na lista
//pode ser void, mas ta sendo int neste caso porq se der erro retorna 0 porem se der certo vai retornar 1=por isso o return 1
int inserirLista (Lista*l, aluno a){
    if(l->qtd == MAX)
    return 0;
    //l-> é um ponteiro para lista e dai vai pra dados q é um vetor, por isso esta em corchetes.
    l->dados[l->qtd] = a;
    l->qtd++;
    return 1;
}

        //verificando o tamanho da lista
        int tamanhoLista (Lista *l){
            return l->qtd;
        }

    //Exibir a lista, so o tamanho
    void exibirLista (Lista *l){
        printf("Lista: \"");
        for int
        printf("\"\n);
    }


//pra excluir a lista
void excluirLista (Lista*l){
    free(l);
}

//excluir UM elemeto da lista
int excluirElementoLista (Lista *l, Aluno a){
    int posicao;
    posicao
}
