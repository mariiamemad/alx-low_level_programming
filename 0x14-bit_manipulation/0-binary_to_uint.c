#include <stddef.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: Binary string (string of 0 and 1 chars)
 *
 * Return: The converted number, or 0 if there are non-binary chars or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return 0;

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return 0;  /* Non-binary character found */

		result = (result << 1) + (*b - '0'); /* Convert to unsigned int */
		b++;
	}

	return result;
}
