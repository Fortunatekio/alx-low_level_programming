#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @f: pointer
 *
 * Return: a pointer to the changed string
 */
char *cap_string(char *f)
{
	int index = 0;

	while (f[index])
	{
		while (!(f[index] >= 'a' && f[index] <= 'z'))
			index++;

		if (f[index - 1] == ' ' ||
				f[index - 1] == '\t' ||
				f[index - 1] == '\n' ||
				f[index - 1] == ',' ||
				f[index - 1] == ';' ||
				f[index - 1] == '.' ||
				f[index - 1] == '!' ||
				f[index - 1] == '?' ||
				f[index - 1] == '"' ||
				f[index - 1] == '(' ||
				f[index - 1] == ')' ||
				f[index - 1] == '{' ||
				f[index - 1] == '}' ||
				index == 0)
			f[index] -= 32;

		index++;
	}
	return (f);
}
