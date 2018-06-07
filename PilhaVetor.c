#include <stdio.h>
#include <stdlib.h>

int pilha[1000], t = 0;

void criarpilha(){
  t = 0;
}
void inserirElemento(int num){
  pilha[t++] = num;
}

int remover_elemento(){
  return pilha[--t];
}

void imprimir(){
  printf("\nPilha: ");
  for(int i = 0; i < t; i++){
    printf("[%d]", pilha[i]);
  }
}

int main(void){
  inserirElemento(10);
  inserirElemento(9);
  inserirElemento(2);
  imprimir();
  remover_elemento();
  imprimir();
}
