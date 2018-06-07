
#include <stdlib.h>
#include <stdio.h>

struct Node{
  int conteudo;
  struct Node *prox;
};
typedef struct Node node;
int tam = 0;

void inicia_pilha(node *pilha){
  pilha->prox = NULL;
}

int pilha_vazia(node *pilha){
  if(pilha->prox == NULL)
    return 1;
  else
    return 0;
}

void insere_elemento(node *pilha, int num){
  node *novo = (node*) malloc(sizeof(node));
  novo->prox = NULL;
  novo->conteudo = num;
  printf("%d", novo->conteudo);

  if(pilha_vazia(pilha)){
    pilha->prox = novo;
}
  else{
    node *aux = pilha->prox;

    while(aux->prox != NULL)
      aux = aux->prox;
    aux->prox = novo;
  }
  tam++;
}

node *remover_elemento(node *pilha){
  if(pilha_vazia(pilha))
    printf("Pilha já está vazia!");
  else{
    node *ultimo = pilha->prox;
    node *penultimo = pilha;

    while(ultimo->prox != NULL){
      penultimo = ultimo;
      ultimo = ultimo->prox;
    }
    penultimo->prox = NULL;
    tam--;
    return ultimo;
  }
}

void imprime(node *pilha){

  if(pilha_vazia(pilha)){
    printf("\nPilha Vazia!");
    return;
  }
  else{
    printf("\nPilha: ");
    node *aux = pilha->prox;
    while(aux != NULL){
      printf("[%d]", aux->conteudo);
      aux = aux->prox;
    }
  }
}

int main(void){
  node *Pilha = (node*) malloc(sizeof(node));
  inicia_pilha(Pilha);
  insere_elemento(Pilha, 9);
  insere_elemento(Pilha, 8);
  insere_elemento(Pilha, 7);
  imprime(Pilha);
  remover_elemento(Pilha);
  imprime(Pilha);
}
