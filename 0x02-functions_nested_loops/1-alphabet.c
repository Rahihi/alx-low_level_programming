#include "main.h"
/**
 * print_alphabet - entry point
 * description: to write a to z embedd it in a function
 * return: 0 if successful
 */
void print_alphabet(void)
{
	char let = 'a';

	for (let <= 'z')
	{
		_putchar(let);
		let++;
	}
	_putchar('\n');
}
