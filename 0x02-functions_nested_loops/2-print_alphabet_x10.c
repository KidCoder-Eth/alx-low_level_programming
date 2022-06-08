#include "main.h"
/**
 * prit_alphabet_x10 - prints 10 times the alphabet,
 * in lowercase,
 * followed by a new line
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char ch;

	int I;

	I = 0;

	while (I < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		I++;
	}
}
