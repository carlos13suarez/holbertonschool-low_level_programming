#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	size_t length_message = sizeof(message)/sizeof(message[0]);
	write(2,message,length_message);
	return (1);
}
