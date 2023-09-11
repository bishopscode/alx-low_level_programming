#include "0-object_like_macro.h"
#include <stdio.h>

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
	printf("%d\n", s);
	return (0);
}

