#include "main.h"
/**
 * Program that prints _putchar
 *
 *
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
