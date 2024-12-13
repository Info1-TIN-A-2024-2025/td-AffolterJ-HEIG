#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CASES 100000

// prototype
double generate_random_real_value(const double min_value, const double max_value);
void InitArray(double *array, unsigned long n);

int main(int argc, const char *argv[])
{
	// Initialisation par rapport au nombre de seconde acteul depuis
	srand(time(0));

	// Constante
	// const unsigned int CASES = 10;

	unsigned int i = 0;
	double array[CASES] = {0.};
	double moy = 0;

	/*for (i = 0; i < CASES; i++)
	{
		array[i] = generate_random_real_value(-40, 42);
	}*/

	InitArray(array, CASES);

	for (i = 0; i < CASES; i++)
	{
		printf("%+5.1lf\n", array[i]);
	}

	for (i = 0; i < CASES; i++)
	{
		moy += array[i];
	}

	moy /= CASES;
	printf("%+5.1lf\n", moy);

	return 0;
}

double generate_random_real_value(const double min_value, const double max_value)
{
	// Variables locales
	double randomVal = 0;

	randomVal = rand();
	randomVal = ((randomVal / RAND_MAX) * (max_value - min_value)) + min_value;

	return randomVal;
}

void InitArray(double *array, unsigned long n)
{
	unsigned long i = 0;

	for (i = 0; i < n; i++)
	{
		// Notation pointeur: *(array+i) = generate_random_real_value(-40, 42);
		array[i] = generate_random_real_value(-40, 42);
	}
}