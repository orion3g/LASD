struct elemento {
int info;
struct elemento *next;
struct elemento *prec;
};

typedef struct elemento *Lista;
void visualizza_lista(Lista lista);
Lista mettiCoda (int x, Lista lista) ;
Lista eliminare_elemento (Lista lista, int elemento_eliminare);
