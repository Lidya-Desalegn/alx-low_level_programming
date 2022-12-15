#include <stdlib.h>
#include <stdio.h>
/**
 * main - print the numebr from 0 to 100
 * 3 multiples print Fizz instead of the number
 * 5 multiples print Buzz instead of the number
 * 3 & 5 multiples print FizzBuzz
 * Return: Always 0
 */
int main(void)
{
	int i;
		char f[] = "Fizz";
	char b[] = "Buzz";
		char fb[] = "FizzBuzz";

		for (i = 1; i <= 100; i++)
		{
			if (i == 100)
				printf("%s", b);
			else if ((i % 3 == 0) && (i % 5 == 0))
				printf("%s", fb);
			else if (i % 3 == 0)
				printf("%s", f);
			else if (i % 5 == 0)
				printf("%s", b);
			else
				printf("%d", i);
		}
		return (0);
}
