// main
#include "moja.h"
#include <stdio.h>

void main ()
{
		unsigned int liczba;
		printf ("Podaj liczbe: ");
	// tu pobiera
	scanf ("%u", &liczba);
	printf ("\n");
	
	my_print(liczba);
	score(liczba);
	first(liczba);

}
