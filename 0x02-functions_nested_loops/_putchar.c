#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the characte c to stdout
 * @c: the character tp print
 *REturn: On success 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
