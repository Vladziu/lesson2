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
	set_bit(liczba);
	score(liczba);
	first(liczba);
	
	printf ("\n");
	printf ("wszystko poszlo by lepiej tylko zapomnialem, ze pozycja 1 to tak na prawde pozycja 0, itd...");

}
