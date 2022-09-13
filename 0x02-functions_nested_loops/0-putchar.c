#include "main.h"




/**
 * main -  prints _putchar, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char word[] = "_putchar";
	char *str = word;

	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
	return (0);
}



