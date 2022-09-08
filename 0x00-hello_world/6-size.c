#include <stdio.h>
/**
 * @chara - holds size of char
 * @integ - Holds size of integer
 * @longInt - Holds size of long int
 * @longLongInt - Holds size of long long int
 * @floatt - Holds size of float
 * Return: always o
 */
int main(void)
{
	char chara;
	int integ;
	long int longInt;
	long long int longLongInt;
	float floatt;

	printf("Size of a char: %Iu bytes(s)\n", sizeof(chara));
	printf("Size of an int: %Iu bytes(s)\n", sizeof(integ));
	printf("Size of a long int: %Iu bytes(s)\n", sizeof(longInt));
	printf("Size of a long long int: %Iu bytes(s)\n", sizeof(longLongInt));
	printf("Size of a float: %Iu bytes(s)\n", sizeof(floatt));
	return (0);
}
