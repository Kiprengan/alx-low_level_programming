#include "main.h"

/**
* main - Print the word "_putchar"
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int i;
	char pchar[] = "_putchar";

	for (i = 0; i < 8; i++)
		{
		_putchar(pchar[i]);
		}
		_putchar('\n');
	return (0);
}
