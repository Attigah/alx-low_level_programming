#include "main.h"

/**
 * print_alphabet - prints alpha 10 times
 */

void print_alphabet(void);
int main(void)
{
	print_alphabet();
	return (0);
}
void alphabet(void)
{
	char ch;
	ch = 'a';
	for (; ch <= 'z';)
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
}
void print_alphabet(void)
{
	int i;
	i = 0;
	for (; i < 10;)
	{
		alphabet();
		i++;
	}
}
