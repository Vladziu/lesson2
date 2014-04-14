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

	
	printf ("CLEAR BIT: ");
	for (c = 1; c <= BITS_IN_INT; c++)
	{
		printf("%u",((val &= ~(1 << bit)) >> (BITS_IN_INT - c) & 1));
	}
	printf("\n");
	
	printf ("SET BIT: ");
	for (c = 1; c <= BITS_IN_INT; c++)
	{
		printf("%u",((val |= 1 << bit) >> (BITS_IN_INT - c) & 1));
	}
	printf("\n");
	
	printf ("TOGGLE BIT: ");
	for (c = 1; c <= BITS_IN_INT; c++)
	{
		printf("%u",((val ^= 1 << bit) >> (BITS_IN_INT - c) & 1));
	}
	printf("\n");
	// and & or | xor ^

	
}

void score (unsigned int val) // ta f liczy tylko boty ustawione na 1, o to chodzilo ?
{
	
	unsigned int count = 0;
	
	while ()
	
	{
		count++;
		val &= (val-1);
	}
	printf ("Liczba sklada sie z %u bitow", count);
	printf ("\n");
	
}

/*void first (unsigned int val)
{
	
	unsigned int count = 0;
	
	while (31 >> 1 != 0)
	{
	count++;
	val &= (val-1);
	}
	
	printf("Najstarszy bit jest na pozycji: %u",count);
	printf ("\n");
	
} */

// nie robiæ pêtli 3x tylko u¿yæ f my print
// wywaliæ a, o, x i wstawiæ to do pêtli, bo tak sobie podmieniam wartosc
