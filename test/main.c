#include "../main.h"
/**
 * main - Entry point of the program.
 *
 * Description: This is the main function that serves as the entry point
 *              for the program. It executes the program's logic.
 *
 * Return: 0 on success, non-zero on error.
 */
int main(void)
{
	int len1 = printf("I %s, I %d, if %c of %i no \n", "Sam", 16, 'c', 5);
	int len2 = _printf("I %s, I %d, if %c of %i no \n", "Sam", 16, 'c', 5);


	/*
	 * int len1 = printf("my name is %s and i am %d year old, i love %c\n",
	 *         "Pascal", 16, 'c');
	 * int len2 = _printf("my name is %s and i am %d year old, i love %c\n",
	 *         "Pascal", 16, 'c');
	 */
	printf("%d = %d", len1, len2);
}
