#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be modified.
 * Return: A pointer to the resulting string.
 */
char *cap_string(char *str)
{
	int i = 0;
	char separators[] = " \t\n,;.!?\"(){}";
	char *ptr = str;

	if (ptr[i] >= 'a' && ptr[i] <= 'z')
	{
		ptr[i] -= 32;
	}
	i++;
	while (ptr[i] != '\0')
	{
		int j = 0;

		while (separators[j] != '\0')
		{
			if (ptr[i] == separators[j])
			{
				if (ptr[i + 1] >= 'a' && ptr[i + 1] <= 'z')
				{
					ptr[i + 1] -= 32;
				}
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}

