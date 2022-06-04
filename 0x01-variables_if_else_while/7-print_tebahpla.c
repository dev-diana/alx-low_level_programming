#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: Always 0
 */
int main(void)
{
	char letters;

	for (letters = 'z'; letters >= 'a'; letters--)
	{
		putchar(letters);
	}
	putchar('\n');
	return (0);
}
