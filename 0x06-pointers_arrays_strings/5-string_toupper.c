#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * string_toupper - function that changes lowercase letters to uppercase.
 * @str: The string to be copy
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *string_toupper(char *str)
{
	int n, i;

	n = strlen(str);
	for (i = 0 ; i < n ; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			switch (str[i])
			{
				case 97:
					str[i] = 65;
					break;
				case 98:
					str[i] = 66;
					break;
				case 99:
					str[i] = 67;
					break;
				case 100:
					str[i] = 68;
					break;
				case 101:
					str[i] = 69;
					break;
				case 102:
					str[i] = 70;
					break;
				case 103:
					str[i] = 71;
					break;
				case 104:
					str[i] = 72;
					break;
				case 105:
					str[i] = 73;
					break;
				case 106:
					str[i] = 74;
					break;
				case 107:
					str[i] = 75;
					break;
				case 108:
					str[i] = 76;
					break;
				case 109:
					str[i] = 77;
					break;
				case 110:
					str[i] = 78;
					break;
				case 111:
					str[i] = 79;
					break;
				case 112:
					str[i] = 80;
					break;
				case 113:
					str[i] = 81;
					break;
				case 114:
					str[i] = 82;
					break;
				case 115:
					str[i] = 83;
					break;
				case 116:
					str[i] = 84;
					break;
				case 117:
					str[i] = 85;
					break;
				case 118:
					str[i] = 86;
					break;
				case 119:
					str[i] = 87;
					break;
				case 120:
					str[i] = 88;
					break;
				case 121:
					str[i] = 89;
					break;
				case 122:
					str[i] = 90;
					break;
				default:
					break;
			}
		}
			else
				str[i] = str[i];
	}
	return (str);
}
