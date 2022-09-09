#include <stdio.h>
#include <cytype.h>

/**
 * main - Program that prints the alphabet in lowercase, and then in,
 * uppercase, followed by a new line.
 *
 * You can only the putchar function (every other function (printf,
 * puts,etc...) is forbidden).
 * All your code should be in the main function.
 * You can only use putchar three times in your code.
 *
 * Return: 0
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
		putchar('\n');
	return (0);
}
