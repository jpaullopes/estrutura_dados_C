#include <stdlib.h>
#include <stdio.h>
#include "dinamicaEncadeada.h"
//implementação das funções
//cria uma lista vazia

struct elemento{
    Aluno dados;
    struct elemento *proximo;
};
//cria uma lista vazia
Lista* criarLista(void){
    Lista *li = (Lista*) malloc(sizeof(Lista));
    if(li != NULL){
        *li = NULL;
    }
    return li;
}
//Liberar Lista
void liberarLista(Lista* li){
    if(li != NULL){
        Lista *no;
        while ((*li) != NULL)
        {
            no = *li;
            *li = (*li)->proximo;
            free(no);
        }
        free(li);
        
    }
}
//calcular tamanho
int tamanhoLista(Lista *li){
    if(li == NULL) return 0;
    int count = 0;
    Lista *no = *li; // o no é um auxiliar para não perder a referencia do inicio da lista
    while (*li != NULL)
    {
        count++;
        *no = (*no)->proximo;
    }
    return count;
    
}
//Saber se lista está vazia
int listaVazia(Lista *li){
    if(li == NULL) return 1;
    if(*li == NULL) return 1;
    return 0;
}
//Saber se lista está cheia
int listaCheia(Lista *li){
    return 0;
}
//insere no inicio
int inserirComecoLista(Lista *li, Aluno al){
    if(li == NULL) return 0;
    struct elemento *no = (struct elemento*)malloc(sizeof(struct elemento));
    if(no == NULL) return 0;
    no->dados = al;
    no->proximo = (*li);
    *li = no;
    return 1;
}
int inserirFinalLista(Lista *li, Aluno al){
    if(li == NULL) return 0;
    struct elemento *no = (struct elemento*)malloc(sizeof(struct elemento));
    if(no == NULL) return 0;
    no->dados = al;
    no->proximo = NULL;
    if((*li) == NULL){//caso o primeiro elemento seja NULL, segnifica que a lista está vazia
        *li = no;
    }
    //caso não esteja
    else{
        struct elemento *aux = *li; //cria um auxiliar para percorrer a lista, pois eu não posso trabalhar com a cabeça real da lista
        while(aux->proximo != NULL){//enquanto o proximo elemento não for NULL
            aux = aux->proximo;
        }
        aux->proximo = no;
    }
    return 1;
}

