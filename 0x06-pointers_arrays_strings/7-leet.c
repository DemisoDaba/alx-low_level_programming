#include "main.h"
/**
* leet - function that encode a string
*@s:string that will be encoded
*Return:returns encoded string
*/
char *leet(char *s)
{
	int x = 0, y = 0, z = 5;
	char r[5] = {'A', 'E', 'O', 'T', 'L'};
	char n[5] = {'4', '3', '0', '7', '1'};

	while (s[x])
	{
		y = 0;

		while (y < z)
		{
			if (s[x] == r[y] || s[x] - 32 == r[y])
			{
				s[x] = n[y];
			}

			y++;
		}

		x++;
	}

	return (s);
}

