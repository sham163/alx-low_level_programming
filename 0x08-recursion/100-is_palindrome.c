#include "main.h"

/**
 * Description: l_index - return the last index
 * @s: s
 * Return: int
 */

int l_index(char *s)
{
	int m = 0;

	if (*s > '\0')
		m = m + l_index(s + 1) + 1;

	return (m);
}


/**
 * Description: check - checks for the palindrome string
 * @s: s
 * @st: st
 * @e: e
 * @mo: mo
 * Return: 0 or 1
 */

int check(char *s, int st, int e, int mo)
{
	if ((st == e + 1 && mo == 0) || (st == e && mo != 0))
		return (1);
	else if (s[st] != s[e])
		return (0);
	else
		return (check(s, st + 1, e - 1, mo));
}

/**
 * Description: is_palindrome - a function that returns 1
 * if a string is a palindrome and 0 if not.
 * @s: string
 * Return: returns 1 if a string is a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
        int e;

        e = l_index(s);

        return (check(s, 0, e - 1, e % 2));
}
