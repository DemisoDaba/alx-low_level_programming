#include "main.h"
/**
*rev_string - Reverse a string
*@s: String to reverse
*Return: Nothing
*/
void rev_string(char *s)
{
	int i = 0, length;
		length = _strlen(s) - 1;
	while (length > i)
	{
		swap_char(s + length, s + i);
		i++;
		length--;
	}
}
/**
 *_strlen - returns the length of a string
 * @s: string
 *Return: returns lenght;
 */
int _strlen(char *s)
{
	int	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}
/**
*swap_char - swap two characters
*@a: first character
*@b: second character
*Return: nothing
*/
void swap_char(char *a, char *b)
{
	char tmp = *a;
	*a = *b;
	*b = tmp;
}
