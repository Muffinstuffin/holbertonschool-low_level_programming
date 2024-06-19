<<<<<<< HEAD
#include "main.h"

/**
 * main - Entry point
 * Description: print _putchar follwed by a new line
 * Return: 0 (success)
 */
int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');
	return (0);
=======
#include <unistd.h>

int main(void)
{
    char text[] = "_putchar\n";
    for (int i = 0; text[i] != '\0'; i++) {
        write(1, &text[i], 1);
    }
    return 0;
>>>>>>> 6ae4d66d5a09b3dc68c2360df6de15a56d1e9a57
}
