
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Graph.h"

int main(){
	graph *G;
	int scelta, u, v, n_peso, gu, ge, peso_max,n, massimo;
	
	do{
		printf("\nScagli l'operazione da svolgere\n");
		printf("1-Crea grafo, 2-Aggiungi_arco, 3-Mondifica_un_peso, 4-Cancella_arco, 5-Grado_uscente, 6-Grado_entrante, 7-Arco_con_peso_maggiore, 8-Stampa_grafo, 9-exit\n");
		scanf("%d",&scelta);
		switch(scelta){
			case 1:
				printf("Quanti vertici vuoi inserire?\n");
				scanf("%d", &n);
				if(n<MAX){
					G=crea_grafo(n);
					printf("Grafo vuoto creato\n");
				}
				else
					printf("20 è il numero massimo di elementi da poter inserire\n");
				
				break;
			case 2:
				printf("Aggiungi arco specificando vertice sorgente e di arrivo:\n");
				printf("Specifica vertice sorgente:\n");
				scanf("%d",&u);
				printf("Specifica vertice di arrivo\n");
				scanf("%d",&v);
				g_add(G, u, v);
				
				break;
			case 3:
				printf("Modifica il peso di un arco specificando peso,vertice sorgente e di arrivo\n");
				printf("Specifica peso modificante\n");
				scanf("%d",&n_peso);
				printf("Specifica vertice sorgente:\n");
				scanf("%d",&u);
				printf("Specifica vertice di arrivo");
				scanf("%d",&v);
				
				Modifica_peso(G, n_peso, u, v);
			
				break;
			case 4:
				printf("Elimina arco specificando vertice sorgente e di arrivo:\n");
				printf("Specifica vertice sorgente:\n");
				scanf("%d",&u);
				printf("Specifica vertice di arrivo");
				scanf("%d",&v);
				
					G=remove(G, u, v);
				
				break;
			case 5:
				printf("Specificare il vertice per sapere il suo grado uscente\n");
				scanf("%d",&u);
				
					gu=grado_uscente(G, u);
			
				break;
			case 6:
				printf("Specificare il vertice per sapere il suo grado entrante\n");
				scanf("%d",&v);
				
					ge=grado_entrante(G, v);
				
					break;
			case 7:	
				peso_max=arco_peso_max(G);
				printf("Peso massimo = %d", peso_max);
				break;
			case 8:
				g_print(G);
		
		}
	
	}
	while(scelta==1 || scelta==2 || scelta==3 || scelta==4 || scelta==5 || scelta==6 || scelta==7 || scelta==8);
} 
