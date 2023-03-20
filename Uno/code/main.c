#include <stdio.h>
#include "code.h"

int main () {
	
	// Inizializzo una variabile nel main di errore
    int err = 0;
	
	 // Inizializzo una coda
    Queue coda = initQueue();
	
	new_coda(coda);
	
    printQueue(coda, &err);
	
	}
