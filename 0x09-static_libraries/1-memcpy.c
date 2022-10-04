#include "main.h"
/**
 * _memcpy - copies memory area.
 * @src: memory source to be copied from
 * @dest: memory destination of copied char
 * @n: amount of bytes to be copied from src to dest
 * Return: updated dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}

