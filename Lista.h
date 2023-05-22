//assinaturas das funcoes

//com isto começa a lista
#define LISTA_H
#define MAX 50

//definindo nossa estrutura, que tipo de estrutura e
typedef struct aluno{
    int matricula;
    // aqui inserimos mais dados
}
//nome da struct
aluno;


    //struct q define onde vai ser armazenado
struct lista
{
    //é o nome de nosso indice
    int qtd;
    aluno* dados[MAX];
};

typedef struct lista Lista;


//Criamos a lista
Lista* criarLista();

//Para inserir um elemento na lista
int inserirLista (Lista *l, Aluno a);