#include "main.h"
#include <stdio.h>
/**
 * is_palindrome_recursive - checks if a string is a palindrome
 * @s: the string to check
 * @start: the starting index of the current comparison
 * @end: the ending index of the current comparison
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome_recursive(char *s, int start, int end)
{
	if (s == NULL)
		return (0);
	if (start >= end)
		return (1);
	if (*(s + start) != *(s + end))
		return (0);
	return (is_palindrome_recursive(s, start + 1, end - 1));
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = 0;

	if (s == NULL)
		return (0);
	while (*(s + len) != '\0')
		len++;
	return (is_palindrome_recursive(s, 0, len - 1));
}
