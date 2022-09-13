include "main.h"


/**
 * _isalpha - checks if a char is an alphabet
 * @c: the char to be checked
 *
 * Return: 1 if c is an alphabet else 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
