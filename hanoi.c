#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

void inicializaJogo(Pilha*);


int opcao=1;
int main(){
	int aux=1;
	Pilha *pinoA = novaPilha();
	Pilha *pinoB = novaPilha();
	Pilha *pinoC = novaPilha();
	while (!(opcao==0)){
		inicializaJogo(pinoA);
	}
}


void inicializaJogo(Pilha *p){
	int aux,i;
	printf("%s\n", "Insira o número de discos que deseja jogar (3 a 7)");
	scanf ("%d", &aux);
	if (aux<3 || aux > 7){
		printf("ERRO! O número de discos deve estar ser de 3 a 7\n####fim da execucao\n");
		opcao = 0;
	} else {
		i=aux;
	printf("%d\n", aux);
		for (; i>=1; i--){
			p = push(p, i+64);
		}
		No *a = p->inicio;
		while(a != NULL)
	{
		printf("%c -> ", a->dado);
		a = a->prox;
	}
	}
}