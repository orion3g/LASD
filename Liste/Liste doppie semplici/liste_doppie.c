#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "Liste_doppie.h"



Lista newelem (int x) {
        
Lista e;
e=malloc(sizeof(struct elemento));
        
e->info=x;
        
return e;
        
}

Lista mettiCoda (int x, Lista lista) {
	
   Lista nuovo=NULL; //puntatore a tipo lista=NULL
   Lista testa;      //puntatore a tipo lista
  
   if  (lista!=NULL) {  //ovvero se già ci sono elementi nella lista
	    
	  for(testa=lista;lista->next!=NULL;lista=lista->next); //itera fino all'ultim elemento della lista
	  
	  
	  nuovo=newelem(x);   //nuovo punterà al un nuovo elemento allocato
	  nuovo->prec=lista;  //nuovo->prec punterà alla lista ovvero all'ultimo elemento iterato prima
	  nuovo->info=x;
	  nuovo->next=NULL;   

  }
	
   else
   {
   lista=newelem(x);
   lista->info=x;
   lista->prec=NULL;
   testa=lista;
		 
}

//in ogni caso lista->next sarà uguale a nuovo, che, nel caso in cui prima fosse stata vuota e quindi non si accoda a niente
//mentre nel caso in cui fosse piena lista->next punterà al nuovo elemento inserito 
lista->next=nuovo;
return testa;


}
//supponiamo di voler inserire elemento in una lista con valore val prima dell'elemento con info=4

Lista inserire_elemento(Lista lista, int x, int y) {
	
	Lista p=newelem (x);
	Lista testa=lista;
	
	while(lista!=NULL) {
	if(lista->info==4) 
		{
			p->info=x;
	        p->next=lista;
            p->prec=lista->prec;	
            lista->prec=p;
            
            if(p->prec!=NULL) {
			
			p->prec->next=p;
			
			}	}	
			
		
			lista=lista->next;
			
	
	}
	
		return testa;
	
}

void visualizza_lista(Lista lista) {
	
	while(lista!=NULL) {
		
		printf("%d ", lista->info);	
		
		lista=lista->next;
		
		}
	
	
	
}

Lista eliminare_elemento (Lista lista, int elemento_eliminare) {
	
	Lista testa, nodo;
	testa=lista;
	
	while(lista!=NULL) {
		
		if((lista->info==elemento_eliminare) && (lista->prec==NULL) ){
			nodo=lista;
			testa=nodo->next;
			nodo->next->prec=NULL;
			free(nodo);
            
 			}
		
		
		else if ((lista->info==elemento_eliminare) && (lista->prec!=NULL))
		
		{
			nodo=lista;
			nodo->prec->next=nodo->next;
			nodo->next->prec=nodo->prec;
			
			
			}
		
		else
		
		
		{
			lista=lista->next;
			
			
			}
		
		
		}
	
	
	return testa;
	
}
