#include "main.h"

/**
 * print_alphabet_x10  - prints the alphabet lowercase, followed by a new line.
 */
void print_alphabet_x10(void)
{
	char letter;
	int count;

	for (count = 0; count <= 9 ; count++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		 _putchar('\n');
	}
}
