#include "main.h"

/**
 * Description: mps - mps function
 * @s2: s2
 * Return: char
 */

char *mps(char *s2)
{
	if (*s2 == '*')
		return (mps(s2 + 1));
	else
		return (s2);
}



/**
 * Description: inc - inc function
 * @s1: s1
 * @s2: s2
 * Return: int
 */

int inc(char *s1, char *s2)
{
        int r = 0;

        if (*s1 == 0)
                return (0);

        if (*s1 == *s2)
        {
                r = r + wildcmp(s1 + 1, s2 + 1);
        }
        r = r + inc(s1 + 1, s2);
        return (r);
}




/**
 * Description: wildcmp - wildcmp function
 * @s1: s1
 * @s2: s2
 * Return: int
 */

int wildcmp(char *s1, char *s2)
{
	int r = 0;

	if (!*s1 && *s2 == '*' && !mps(s2))
	{
		return (1);
	}
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}

	if (!s2 || !*s1)
	{
		return (0);
	}
	if (*s2 == '*')
	{
		s2 = mps(s2);
		if (!*s2)
		{
			return (1);
		}
		if (*s2 == *s1)
		{
			r = r + wildcmp(s1 + 1, s2 + 1);
		}
		r = r + inc(s1, s2);
		return (!!r);
	}
	return (0);
}



