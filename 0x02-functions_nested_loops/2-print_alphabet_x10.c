#include "main.h"


	/**
	 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
	 * followed by a new line
	 *
	 *Description: This function prints the alphabet in lowercase 10 times, each time followed by a new line.
         * It does not take any parameters and does not return a value.
	 */
	void print_alphabet_x10(void)
	{
		char ch;
		int i;


		i = 0;


		while (i < 10)
		{
			ch = 'a';
			while (ch <= 'z')
			{
				_putchar(ch);
				ch++;
			}
			_putchar('\n');
			i++;
		}
	}
