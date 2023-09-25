#include "main.h"
#include <string.h>

/**
 * _memcpy - function that copies memory area.
 * @n: Prameter to be checked
 * @dest: Prameter to be checked
 * @src: Prameter to be checked
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_strstr(char *haystack, char *needle)
{
    haystack = strstr(haystack, needle);
    return (haystack);
}