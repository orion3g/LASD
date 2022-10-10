#include "List.h"
#include <stdio.h>
#include <stdlib.h>


List initList(int key, int peso) {

List L=malloc(sizeof(struct TList));
L->key=key;
L->peso=peso;
L->next=NULL;
	
	
return L;	
}

//agiunge un nodo alla fine della lista controllandole l'esistenza 
//La funzione ritorna sempre la testa

List appendNodeList(List L, int key, int peso) {
	
	if (L!=NULL) {
		
		if(L->key!=key) {
		
		L->next=appendNodeList(L->next, key, peso); 
		
		
		}
	}
		
	else
	
	L=initList(key, peso);
	
	
	return L;
}


//rimuove solo un'occorenza di un nodo con il key specificato (nodo in cui etra) dalla lista.
//La funzione ritorna sempre la testa

List removeNodeList(List L, int key) {
	
	if (L!=NULL) {
		
		if(L->key!=key) {
			
			L->next=removeNodeList(L->next, key);
			
			}
		
		
		else 
		{
		List tmp=L->next;
		free(L);
		return tmp;
		
	}
		}
	
	
	return L;
	
}

void printList(List L){
	
	while (L!=NULL) {
		
		printf("-%d(%d)", L->key, L->peso);
		L=L->next;
		
		}
	
	
}

void freeList(List L) {
	
	if (L!=NULL) {
		
		free(L);
		L=L->next;
		
		}
	
}
