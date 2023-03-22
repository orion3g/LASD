#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

//STRUTTURA
struct TTree{
	int info;
	struct TTree *sinistro, *destro;	
};

typedef struct TTree *Tree;
Tree initNode(int info);
Tree insertNodeTree (Tree T, int info);
int riconosci_ABR (Tree T);
int ricerca_minimo (Tree T);
int ricerca(Tree T, int r);



int main () {
	
printf("ciao");	

};

//inizializza nodo

Tree initNode(int info) {
	Tree T= (struct TTree*)malloc(sizeof(struct TTree));
	T->info=info;
	T->sinistro=NULL;
	T->destro=NULL;

	return T;

}

//inserisci nodo nell'albero, ricorda che se info>radice va a dx se info<radice va a sx 

Tree insertNode(int info, Tree T) {
	
	if (T!=NULL) {
		
		if(T->info<info) {
			
			T->destro=insertNode(info, T->destro);
			
		}
		
		else if(T->info<info) {
			
			T->sinistro=insertNode(info, T->sinistro);
			
		}
		
	}
	
	else {
		
		T=initNode(info);
		
	}
	
}

//UN ALBERO E' UN ABR SE E SOLO SE HA L'ELEMENTO MINIMO IN FONDO A SINISTRA E L'ELEMENTO MASSIMO IN FONDO A DESTRA

int riconosci_ABR(Tree T){
	
	//se il nodo corrente ha un figlio sinistro e il figlio sinistro ha un valore maggiore del padre allora non è un ABR
	
	if((T->sinistro) != NULL && (T->sinistro->info) > T->info) 	
	return 0;
	
	//se il nodo corrente ha un figlio destro e il figlio destro ha un valore minore del padre allora non è un ABR
		
	if(T->destro != NULL && (T->destro->info) < T->info) 	
	return 0;
	
	//questo if contiene le chiamate ricorsive e il ritorno di entrambi sarà confrontato nell'if 
		
	if(!riconosci_ABR(T->sinistro) || !riconosci_ABR(T->destro)) 	
	return 0;
		
	return 1;
}


int ricerca(Tree T, int r) {
	int trovato=0; 
	
	if (T=!NULL) {
		
		if (T->info==r) {
			
			return 1; //trovato
		}
			
		else if(T->info >r) {
			trovato=ricerca(T->sinistro, r); //cerca nel sottoalbero sx
			
		}
		
		else 
		
		trovato=ricerca(T->destro, r); //cerca nel sottoalbero dx
	}
	
}


int ricerca_minimo (Tree T) {
	
	int min=0;
	
	if(T!=NULL) {
		if (T->sinistro==NULL) {
			
	min=T->info;
		}
		
		else 
		
		min=ricerca_minimo(T->sinistro);
	}
	
	
	return min;
	
	
}
