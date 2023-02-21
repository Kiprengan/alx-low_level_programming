#include "main.h"
/**
* main - Print the word "_putchar"
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i = 0;
char pchar[] = "_putchar";
while (i < 8)
{
_putchar(pchar[i]);/* using _putchar function */
i++;
}
_putchar('\n');
return (0);
}
