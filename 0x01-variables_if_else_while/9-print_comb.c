#include <stdio.h>

/**
 * main - prints from 0 to 9 seperated by coma follower by a space
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);

		if (num != '9')
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
