
#define "Graph.h"
#define "List.h"
#define "assert.h"

Graph initGraph(int num_v) {

Graph G=malloc(sizeof(struct TGraph);
G->adj=calloc(num_v, sizeof(struct TList);
G->num_v->num_v;
	
	
return G;
}


void addEdge(int key, int source, int peso, Graph G) {
	
	assert(key<G->num->v);
	assert(source <G->num->v);
	
	if (key!=source) {
		
		G->adj[source]=appendNodeList(G->adj[num_v], key, peso);
		
		}
	

}

void removeEdge(int key, int source, Graph G) {
	
	assert(key<G->num->v);
	assert(source <G->num->v)
	
	if(key!=source) {
		
		G->adj[source]=removeNodeList(G->adj[num_v], key);
		
		}
	
	
}
