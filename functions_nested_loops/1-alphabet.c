#include<Holenerton.h>
/**
 * main - Starting bucle
 *
 * Description: function that prints the alphabet
 *
 * Return: zero
 */
void print_alphabet(void)
{
char letter = 'A';
while (letter <= 'Z')
{
putchar(letter);
letter++;
}
putchar('\n');
}
int main(void)
{
print_alphabet(void);
return (0);
}
