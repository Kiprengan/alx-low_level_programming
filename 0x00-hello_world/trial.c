#include <stdio.h>

/**
 *Trying to run create a programe that gets user
 *firstname
 *lastname and 
 *age
 *then prints all
 */
int main(void)
{
char firstname[20];
char lastname[20];
int age;
printf("Please enter your First name : ");
scanf("%s", firstname);
printf("Please enter your Last name : ");
scanf("%s", lastname);
printf("Please enter you age: ");
scanf("%d", &age);
printf("You name is %s %s and age is %d", firstname, lastname, age);
return (0);
}
