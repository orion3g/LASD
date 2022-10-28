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
	
   Lista nuovo, tmp;
  
   if  (lista!=NULL) {  //ovvero se già ci sono elementi nella lista
	    
	  for(tmp=lista;tmp->next!=NULL;tmp=tmp->next); //itera fino all'ultim elemento della lista
	  
	  
	  nuovo=newelem(x);   //nuovo punterà al un nuovo elemento allocato
	  nuovo->prec=tmp;  //nuovo->prec punterà a tmp ovvero all'ultimo elemento iterato prima
	  nuovo->info=x;
	  nuovo->next=NULL;   
      tmp->next=nuovo; 
  }
	
   else
   {
   lista=newelem(x);
   lista->info=x;
   lista->prec=NULL;
   lista->next=NULL; 
}


return lista;


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
	
	Lista tmp=lista;
	Lista nodo;

	
	while(tmp!=NULL) {
		
		if((tmp->info==elemento_eliminare) && (tmp->prec==NULL) ){
			nodo=tmp;
			tmp->next->prec=NULL;
			lista=tmp->next;
			free(nodo);
			
            
 			}
		
		
		else if ((tmp->info==elemento_eliminare) && (tmp->prec!=NULL))
		
		{
			nodo=tmp;
			
			if(tmp->next!=NULL) //se non è l'ultimo elemento
			{
			tmp->prec->next=tmp->next;
			tmp->next->prec=tmp->prec;
			
			}
		
		else //se è l'ultimo elemento
		
		
		{
			tmp->prec->next=tmp->next;
			
			}
		
					tmp=tmp->next;
					free(nodo);

		}
		
		else {
			
			tmp=tmp->next;
			
			}
		
		
		
		}
	
	
	return lista;
	
}
