#include <stdio.h>
#include <stdlib.h> // atoi, atof

int main(int argc, const char *argv[])
{
	printf("argc = %d\n", argc);

	// test with :
	// ./app					: 1
	// ./app 10 20				: 3
	// ./app toto titi			: 3
	// ./app Albert Einstein	: 3
	// ./app "Albert Einstein"	: 2
	// ./app 3.14 2.71828 9		: 4

	// First step : check the number of arguments
	// Exemple
	if (argc != 3)
	{
		printf("Error, bad number of arguments\n");
		return 1;
	}

	printf("1st argument = %s\n", argv[0]);
	printf("2nd argument = %s\n", argv[1]);
	printf("3rd argument = %s\n", argv[2]);

	int i = 0;
	double x = 0;

	i = atoi(argv[1]);
	x = atof(argv[2]);
	printf("i = %d, x = %f\n", i, x);

	return 0;
}