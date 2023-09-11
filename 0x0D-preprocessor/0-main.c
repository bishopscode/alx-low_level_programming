nclude "0-object_like_macro.h"

/**
 * main - Entry point
 *
 * Description: This program adds 98 to the SIZE macro
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int s;

	s = 98 + SIZE;
	_putchar((s / 100) + '0');
	_putchar((s / 10 % 10) + '0');
	_putchar((s % 10) + '0');
	_putchar('\n');
	return (0);
}

