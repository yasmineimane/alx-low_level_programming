#include "main.h"
#include <string.h>

/**
 * _strcat -  function that concatenates two strings.
 * @dest: The string to be concatenate
 * @src: The string to be concatenate
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_strcat(char *dest, char *src)
{
	char *s;

	s = strcat(dest, src);
	return (s);
}
