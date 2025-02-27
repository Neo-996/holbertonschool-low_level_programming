#include "main.h"
#include <stdio.h>

/**
  * print_number - Prints an integer.
  * @n: The integer to prints.
  *
  * Return: Nothing!
  */
void print_number(int n) {
    if (n < 0) {
        _putchar('-');
        n = -n;
    }

    if (n / 10 != 0) {
        print_number(n / 10);
    }

    _putchar(n % 10 + '0');
}

int main() {
    print_number(123);
    _putchar('\n');
    print_number(-456);
    _putchar('\n');
    return 0;
}
