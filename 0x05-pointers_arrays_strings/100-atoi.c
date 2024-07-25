#include <limits.h>
/**
 * _atoi - Converts a string to an integer
 * @s: The string to be converted
 *
 * Return: The converted integer
 */
int _atoi(char *s)
{
	int sign = 1;   /* Keeps track of sign */
	int result = 0; /* Stores the result */
	int i = 0;      /* Iterator for the string */

	/* Skip leading whitespace */
	while (s[i] == ' ')
		i++;

	/* Handle optional sign */
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
	{
		i++;
	}

	/* Process the digits */
	while (s[i] >= '0' && s[i] <= '9')
	{
		/* Check for overflow */
		if (result > (INT_MAX / 10) ||
		(result == (INT_MAX / 10) && (s[i] - '0') > INT_MAX % 10))
		{
			/* Return INT_MAX or INT_MIN on overflow */
			return ((sign == 1) ? INT_MAX : INT_MIN);
		}
		/* Accumulate the result */
		result = result * 10 + (s[i] - '0');
		i++;
	}

	/* Apply sign and return result */
	return (sign * result);
}
