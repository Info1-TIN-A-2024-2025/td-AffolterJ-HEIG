#include <stdio.h>
#include <math.h>

int main(int argc, const char *argv[])
{
	int i = 0;

#if (0)
	int ret = 0;

	do
	{
		printf("Entrer une valeur positive entière non nulle: ");
		ret = scanf("%d", &i);
		if (!ret)
		{
			while (getchar() != '\n')
			{
			}
		}

	} while (i <= 0);
#endif
#if 0
	for (i = 0; i <= 5; i++)
	{
		printf("%d", i);
	}
	puts("");

	for (i = 10; i >= 0; i--)
	{
		printf("%d", i);
	}
	puts("");

	double x = 0.;
	for (x = 10; x >= 0; x -= 1e-4)
	{
		printf("%.20lf\n", x);
	}
#endif
	double alpha = 0;
	const int A = 4.0;
	const double a_start = 0;
	const double a_end = 2.0 * M_PI;
	const int N = 13;
	double step = (a_end - a_start) / (N - 1);

	// que 12 valeurs car erreur de calcul
	for (alpha = a_start; alpha <= a_end; alpha += step)
	{
		printf("%+6.4lf\n", A * sin(alpha));
	}

	return 0;
}