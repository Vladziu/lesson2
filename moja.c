// moje funkcje
#include <stdio.h>
#include <string.h>
#include "moja.h"

// funkcja sluzaca do pobierania liczby z klawiatury
void my_print (unsigned int val)
{
	// deklaracje zmiennych
	unsigned int c;

	

	// i tu wyswietla...
	printf ("%u = 0x%x = ", val, val);

	for (c = 1; c <= BITS_IN_INT; c++)
	{
		printf("%u",(val >> (BITS_IN_INT - c) & 1));
	}
	printf("\n");

}

void set_bit (unsigned int *val, unsigned int bit)
{
	
	// and & or | xor ^
	
}

void score (unsigned int val)
{
	
	// i++ , printf i
	
}

void first (unsigned int val)
{
	
	// MASKI, tablice prawdy
	
}
