#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer.
 *  @s: input string.
 *  Return: integer.
 */

int _atoi(char *s)
{
unsigned int count = 0, size = 0, oi = 0, pn = 1, m = 1, i;
while (*(s + count) != '\0')
{
if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
break;
if (*(s + count) == '-')
pn *= -1;
if ((*(s + count) >= '0') && (*(s + count) <= '9'))
{
if (size > 0)
m *= 10;
size++;
}
count++;
}
for (i = count - size; i < count; i++)
{
oi = oi + ((*(s + i) - 48) * m);
m /= 10;
}
return (oi *pn);
}

/**
 *  main - adds two positive number
 *  @argc: number of arguments
 *  @argv: array of arguents
 *  Return: 0 (Success), or 1 (Success)
 */

int main(int argc, char *argv[])
{
int sum, num, i, j, k;
sum = 0;
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] > '9' || argv[i][j] < '0')
{
puts("Error");
return (1);
}
}
}
for (k = 1; k < argc; k++)
{
num = _atoi(argv[k]);
if (num >= 0)
{
sum += num;
}
}
printf("%d\n", sum);
return (0);
}
