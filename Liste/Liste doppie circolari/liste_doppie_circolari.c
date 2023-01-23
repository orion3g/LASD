#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "List.h"



Lista newelem (int x) {
        
Lista e;
e=malloc(sizeof(struct elemento));
e->info=x;
        
return e;
        
}

Lista mettiCoda (int x, Lista lista) {
	
   Lista nuovo, tmp;
  
   if  (lista!=NULL) {  //ovvero se già ci sono elementi nella lista
	    
	  for(tmp=lista;tmp->next!=lista;tmp=tmp->next); //itera fino all'ultimo elemento della lista
	  
	  nuovo=newelem(x);   //nuovo punterà al un nuovo elemento allocato
	  nuovo->prec=tmp;  //nuovo->prec punterà a tmp ovvero all'ultimo elemento iterato prima
	  nuovo->info=x;
	  nuovo->next=lista;   
	  lista->prec=nuovo; //con questa pongo la circolarità
      tmp->next=nuovo; 
  }
	
   else
   {
   lista=newelem(x);
   lista->info=x;
   lista->prec=lista;
   lista->next=lista; 
}


return lista;


}


void visualizza_lista(Lista lista) {
	
	Lista tmp=lista;
	
	do {
		
		printf("%d ", tmp->info);
		tmp=tmp->next;	
		
		}
	
	while (tmp!=lista);
	
	
	
	
}

Lista eliminare_elemento (Lista lista, int elemento_eliminare) {
	
Lista tmp=lista;
Lista nodo;

do {
    
    if ((tmp->info==elemento_eliminare) && (tmp==lista))
    {
        nodo=tmp;
        tmp->next->prec=tmp->prec; 
        tmp->prec->next=tmp->next;
        tmp=tmp->next;
        lista=tmp; //cambio la testa
        free(nodo);
        
        
    }
    
    
    else if((tmp->info==elemento_eliminare) && (tmp!=lista)) {
        
        
        nodo=tmp;
        
        
        if (tmp->next!=lista) {
            
            tmp->prec->next=tmp->next;
            tmp->next->prec=tmp->prec;
            
        }
        
        
        else 
        
        {   
            
            tmp->prec->next=tmp->next;
            lista->prec=tmp->prec->next; //cambio il puntatore a prec della testa, avendo eliminato il nodo a cui puntava
            
        }
        
        tmp=tmp->next;
        free(nodo);
        
        
    }
    
    
    else {
    
    tmp=tmp->next;
    
    }
}

while(tmp!=lista);
	
	
	
return lista;	
}