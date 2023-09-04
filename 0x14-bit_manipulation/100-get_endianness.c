#include "main.h"

/**
 * get_endianess - checks if a machine is little or bog endian
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
