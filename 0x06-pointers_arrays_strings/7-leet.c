#include "main.h"

/**
 *
 */
char *leet(char *s)
{
	char m[10] = {
		'4', 'a',
		'3', 'e',
		'0', 'o',
		'7', 't',
		'1', 'l'
	};
	int i = 0, j;

	while (s[i])
	{
		for (j = 1; j < 5; j += 2)
		{
			if (s[i] == m[j] || s[i] == (char)(m[j] - 32))
				s[i] = m[j - 1];
		}
		++i;
	}
	return (s);
}

