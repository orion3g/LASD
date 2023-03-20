#include "list.h"
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

Lista newElement(int x) {
Lista e = (struct TList*) malloc(sizeof(struct TList));
e->info = x;

return e;
}


 Lista insert(int x, Lista head) {
 
 Lista tail=head; //all'inizio pongo tail=head e lo cambio solo in caso in cui devo aggiungere più di un elemento
                 
 
 Lista e=newElement(x);
 
 if (head!=NULL) //se già ci sono elementi nella lista 
 
 {   tail=head->prev; //nel caso in cui la lista non fosse vuota
     
     e->prev=tail;
     e->next=head;
     tail->next=e;
     head->prev=e;
     tail=e;
     
 }
 
 
 else 
 
 {
     e->next=e;
     e->prev=e;
     head=e;
     tail=e;
     
     
 }
 
 return head;  
}


void print (Lista head) {
	Lista tmp=head;
	do 
	{
		printf("%d - ", tmp->info);
		tmp=tmp->next;
		
	}
	
	while (tmp!=head); 
	
	
	
}


Lista sostituzione (Lista head) 

{
	int l=1;
	Lista tmp=head;
	do 
	{
		
		if (l%2!=0) {
			
			tmp->info=(((tmp->prev->info)+(tmp->next->info))/2);
			
		}
		
		l++;
		tmp=tmp->next;
		
	}
	
	while (tmp!=head); 
	
	
	return head;
	
}