
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "liste_semplici.h"



Lista newelem (int x) {
        
Lista e;
e=malloc(sizeof(struct elemento));
        
e->info=x;
        
return e;
        
}

Lista mettiCoda (int x, Lista lista) {
	
   Lista nuovo=NULL; //puntatore a tipo lista=NULL
   Lista testa;      //puntatore a tipo lista
  
   if  ) {  //ovvero se già ci sono elementi nella lista
	    
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



//supponiamo di voler inserire elemento in una lista con valore val prima dell'elemento puntato da pos

void inserire_elemento(Lista lista, int x, Lista pos) {
	Lista p=newelem (x);
	Lista testa;
	
	
	testa=lista;
	
	while(lista!=NULL) {
	if(lista==pos) 
		{
			p->info=val;
	        p->next=lista;
            p->prec=lista->prec;	
            lista->prec=p;
            
            if(p->prec!=NULL) {
			
			p->prec->next=p;
			
			}		
			
			}
		
		
		
		
		
	}
	
	
	
	
		
		
	return testa;
	
}

void visualizza_lista(Lista lista) {
	
	while(lista!=NULL) {
		
		if(lista->info==6)
		printf("%d %d %d", lista->prec->info, lista->info, lista->next->info);	
		
		lista=lista->next;
		
		}
	
	
	
}

