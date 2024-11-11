//prototipos das funções
//Tipos de dados a serem armazenadas na lista
//ponteiro para o próximo elemento da lista

typedef struct aluno{
    int matricula;
    char nome[30];
    float n1, n2, n3;
}Aluno;

typedef struct elemento* Lista;

//cria uma lista vazia
Lista* criarLista();
//Liberar Lista
void liberarLista(Lista* li);
//Saber o tamanho da lista
int tamanhoLista(Lista *li);
//Saber se lista está vazia
int listaVazia(Lista *li);
//Saber se lista está cheia
int listaCheia(Lista *li);
//insere no inicio
int inserirComecoLista(Lista *li, Aluno al);
//insere no final
int inserirFinalLista(Lista *li, Aluno al);
