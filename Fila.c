#include <stdio.h>
#include <stdlib.h>

struct node{
  int num;
  struct node *prox;
};
typedef struct node celula;
int tamanho;

void cria_fila(celula *fila){
  fila->prox = NULL;
  tamanho = 0;
}

int fila_vazia(celula *fila){
  if(fila->prox ==  NULL)
    return 1;
  else
    return 0;
}

void inserir(celula *fila, int num2){
  celula *novo = (celula*) malloc(sizeof(celula));
  novo->prox = NULL;
  novo->num = num2;

  if(fila_vazia(fila))
    fila->prox = novo;
  else{
    celula *aux = fila->prox;
    while(aux->prox != NULL)
      aux = aux->prox;
    aux->prox = novo;
  }
  tamanho++;
}

int remover(celula *fila){
  if(fila_vazia(fila))
    return 0;
  else{
    celula *aux = fila->prox;
    fila->prox = aux->prox;
    tamanho--;
    return aux->num;
  }
}

void imprime(celula *fila){
  if(fila_vazia(fila))
    printf("\nFila Vazia!");
  else{
    celula *aux = fila->prox;
    printf("\nFila: ");
    while(aux != NULL){
      printf("[%d]", aux->num);
      aux = aux->prox;
    }
  }
}



int main(void) {
  celula *Fila = (celula*) malloc(sizeof(celula));
  cria_fila(Fila);
  inserir(Fila, 9);
  inserir(Fila, 8);
  inserir(Fila, 7);
  inserir(Fila, 6);
  imprime(Fila);
  remover(Fila);
  imprime(Fila);
  remover(Fila);
  imprime(Fila);
  
  return 0;
}
