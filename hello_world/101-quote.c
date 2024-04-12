#include <unistd.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char buff[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	size_t length_buff = sizeof(buff) / sizeof(buff[0]);

	write(2, buff, length_buff);
	return (1);
}
