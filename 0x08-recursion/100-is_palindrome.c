#include "main.h"

/**
 * _strlen - function return length of string
 * @str: string to check
 *
 * Return: length of string
 */
int _strlen(char *str)
{
	if (*str == '\0')
		return (0);
	else
		return (1 + _strlen(str + 1));
}

/**
 * check_palindrome - verify to see if a string is a palindrome
 * @first: first index
 * @last: last hand index
 * @p: possible palindrome
 *
 * Return: 1 if palindrome 0 if not
 */
int check_palindrome(int first, int last, char *p)
{
	if (first >= last)
		return (1);
	else if (p[first] != p[last])
		return (0);
	else
		return (check_palindrome(first + 1, last - 1, p));
}

/**
 * is_palindrome - states if a string is a palindrome
 * @str: string to check
 *
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *str)
{
	int i;

	i = _strlen(str) - 1;
	return (check_palindrome(0, i, str));
}
