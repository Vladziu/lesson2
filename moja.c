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

void set_bit (unsigned int val, unsigned int bit)
{

	unsigned int c, a, o, x;
	
	printf ("Podaj bit do ktory chcesz zmieniac: ");
	scanf ("%u", &bit);
	a = (val) & (1 << (bit));
	o = (val) |= (1 << (bit));
	
	printf ("AND: ");
	for (c = 1; c <= BITS_IN_INT; c++)
	{
		printf("%u",(a >> (BITS_IN_INT - c) & 1));
	}
	printf("\n");
	
	printf ("OR: ");
	for (c = 1; c <= BITS_IN_INT; c++)
	{
		printf("%u",(o >> (BITS_IN_INT - c) & 1));
	}
	printf("\n");
	
	// and & or | xor ^

	
}

void score (unsigned int val)
{
	
	unsigned int count;

	while (val)
	{
		val &= (val-1);
		count++;
	}
	printf ("Liczba sklada sie z %u bitow", count);
	
}

void first (unsigned int val)
{
	
	// MASKI, tablice prawdy
	
}
