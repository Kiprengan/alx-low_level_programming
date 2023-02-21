#include "main.h"
/**
 * Program that prints _putchar
 *
 *
 */
int main(){
int i=0;
char pchar[] = "_putchar";
while(i < 8){
_putchar(pchar[i]);
i++;	
}
_putchar('\n');
return(0);
}
