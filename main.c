// main
#include "moja.h"
#include <stdio.h>

void main ()
{
	unsigned int liczba, bit;
	printf ("Podaj liczbe: ");
	// tu pobiera
	scanf ("%u", &liczba);
	printf ("\n");
	
	my_print(liczba);
	
	printf ("Podaj bit do ktory chcesz zmieniac: ");
	scanf ("%u", &bit);
	
	set_bit(liczba,bit);
	score(liczba);
//	first(liczba);
	
	printf ("\n");

}
