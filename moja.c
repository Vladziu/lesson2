// moje funkcje
#include <stdio.h>
#include <string.h>
#include "moja.h"

// funkcja sluzaca do pobierania liczby z klawiatury
void pobieranie ()
{
	// deklaracje zmiennych
	unsigned int liczba;
	unsigned int c, x;

	
	printf ("Podaj liczbe: ");
	// tu pobiera
	scanf ("%u", &liczba);
	printf ("\n");
	// i tu wyswietla...
	printf ("Twoja liczba zapisana dziesietnie to: %u\n", liczba);
	printf ("Twoja liczba zapisana szesnastkowo to: 0x%x\n", liczba);
	printf("Twoja liczba zapisana dziesietnie to: ");

	for (c = 1; c <= BITS_IN_INT; c++)
	{
		printf("%u",(liczba >> (BITS_IN_INT - c) & 1));
	}
	printf("\n");

}

