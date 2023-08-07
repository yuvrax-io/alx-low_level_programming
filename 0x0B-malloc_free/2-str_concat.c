#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @str1: parameter of string to concat with str2
 * @str2: parameter string to concat with str1
 * Return: return of pointer to string concat
 */
char *str_concat(char *str1, char *str2)
{
	int len1, len2, i, j;
	char *ptr;

	if (str1 == NULL)
		str1 = "";
	if (str2 == NULL)
		str2 = "";
	for (len1 = 0; str1[len1]; len1 += 1)
		;
	for (len2 = 0; str2[len2]; len2 += 1)
		;
	ptr = malloc(len1 + len2 + 1);
	if (ptr == NULL)
		return (ptr);
	for (i = 0; i < len1; i += 1)
		ptr[i] = str1[i];
	for (j = 0; i < len1 + len2; i += 1, j += 1)
		ptr[i] = str2[j];
	ptr[i] = '\0';
	return (ptr);
}
