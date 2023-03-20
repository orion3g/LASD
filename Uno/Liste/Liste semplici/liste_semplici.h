
struct elemento {
int inf;
struct elemento *next;
};


//Data una lista per controllare se essa è vuota basta controllare se essa punta a null
int controlla_lista_vuota(struct elemento *Lista);

struct elemento *crea_lista ();
void visualizza_lista(struct elemento *Lista);
struct elemento *elimina_elemento_coda (struct elemento *Lista);
struct elemento *elimina_elementi_pari (struct elemento *Lista);
struct elemento *coda (int x, struct elemento *Lista);

 
