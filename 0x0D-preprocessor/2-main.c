#include <stdio.h>
#include <stdlib.h>

/**
 * This program prints name file which the program was compliled from
 * no arguments
 * returns 0
 * 
 */
int main(void){
	printf("This program was compliled from %s\n", __FILE__);
	retun (0);
}
