#include <stdio.h>
/**
*main - entry point
*Return:(0)(succsess)
*/
int main(void)
{
int a;
long int b;
long long int c;
char d;
float f;
printf("Size of a char: %Lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of an int: %Lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a long int: %Lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long long int: %Lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a float: %Lu byte(s)", (unsigned long)sizeof(f));
return (0);
}
