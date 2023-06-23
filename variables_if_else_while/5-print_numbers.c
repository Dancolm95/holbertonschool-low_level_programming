#include<stdio.h>
/**
 * main - Numbers of base ten
 *
 * Description: Numbers of base ten starting from zero
 *
 * Return: Zero if succesful
 */
int main(void)
{
	char n;

for (n = '0'; n <= '9'; n++)
{
putchar(n);
}

putchar('\n');

return (0);
}
