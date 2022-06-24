#include "main.h"
/**
 *_isalpha - Determine whether an integer is character or not.
 *@a: the number to be checked.
 * Return: 1 if character, o if otherwise.
 */
int _isalpha(int a)
{
	if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
	{
	return (1);
	}
	else
	{
		return (0);
	}
}
