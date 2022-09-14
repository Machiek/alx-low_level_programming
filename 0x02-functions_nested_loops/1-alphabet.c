#include <ctype.h>
#include "main.h"

/**
 * print_alphabet - Function that prints the alphabet, in lowercase,
 * followed by a new line.
 * You can only use _putchar twice in your code.
 * Return: 0.
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');
}
