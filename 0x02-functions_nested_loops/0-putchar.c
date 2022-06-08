#include "main.h"
/**
 * Description: main -  prints _putchar, followed by a new line
 * Return: Always 0
 */
int main(void)
{
	char kid[] = "_putchar";

	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(kid[c]);
	}
	_putchar('\n');
	return (0);
}
