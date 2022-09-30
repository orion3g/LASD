

struct TList{
	int key;//chiave che rappresentano i vertici adiacenti nella posizione i-esima dell'array nel modello a liste di adiacenza
	int peso;//per creare un grafo pesato
	struct TList *next;//semplice next al prossimo elemento della lista
};


typedef struct TList *List;


List initNodeList(int info, int peso);
List appendNodeList(List L, int key, int peso);



