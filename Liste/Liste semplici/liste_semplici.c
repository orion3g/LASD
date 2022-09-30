
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "liste_semplici.h"


int controlla_lista_vuota(struct elemento *Lista) {

return (Lista==NULL);
}



struct elemento *newelem (int x) {
        
struct elemento *e;
e=malloc(sizeof(struct elemento));
        
e->inf=x;
e->next=NULL;
        
return e;
        
}

struct elemento *coda (int x, struct elemento *Lista) {
        
        struct elemento *tmp, *e;
        e=newelem(x);
        
        if (Lista!=NULL)
         
         {
            for (tmp=Lista;tmp->next!=NULL;tmp=tmp->next);
            
            tmp->next=e;
            
            
            }
            
            
            else
        
        Lista=e;
        
        return Lista;
        
}



struct elemento *crea_lista () {

struct elemento *testa, *punt;
int i, n;
printf("Specificare numero di elementi");
scanf("%d", &n);

if(n==0)
testa=NULL;

else 

{
	testa=(struct elemento*) malloc(sizeof(struct elemento));
	printf("Inserisci valore n 1:");
	scanf("%d", &testa->inf);
	punt=testa;
	
	for(i=2; i<=n; i++) {
		punt->next=(struct elemento *) malloc(sizeof(struct elemento));
		punt=punt->next;
		printf("inserisci valore n %d", i);
		scanf("	%d", &punt->inf);
		
		}
	punt->next=NULL;
	}   
	
	return testa;
}


void visualizza_lista(struct elemento *Lista) {
	
	if (Lista==NULL) return;
	printf("%d", Lista->inf);
	visualizza_lista(Lista->next);
	

}
struct elemento *elimina_elemento_coda (struct elemento *Lista) {
	
	struct elemento *curr, *prec, *nodo;
	curr=Lista;
	prec=Lista;
	
	while (curr!=NULL) {		
		
        if ((curr->next)==NULL) {
			
			 nodo=curr;
             prec->next=NULL;
             free(nodo);
			
			}
			
			
			prec=curr;
            curr=curr->next;
                     
                		
   }
   
     
   
    

return Lista;
	
}

struct elemento *elimina_elementi_pari (struct elemento *Lista) {
	
	struct elemento *curr, *prec, *nodo;
	curr=Lista;
	prec=Lista;
	
           while (curr!=NULL) {
                
                if (((curr->inf)%2==0) && (curr==Lista)) {
                    
                    nodo=curr;
                    curr=curr->next;
                    Lista=curr;
                    free(nodo);
                
                    
                    }
                    
                    
                    else if (((curr->inf)%2==0) && (curr!=Lista)) {
                    
                    nodo=curr;
                    prec->next=curr->next;
                    curr=curr->next;
                    free(nodo);
                
                    
                    }
                    
                
                else {
                    
                    prec=curr;
                    curr=curr->next;
                    
                    
                    }
                    
				}
   
     
   
    

return Lista;
	
}





	

