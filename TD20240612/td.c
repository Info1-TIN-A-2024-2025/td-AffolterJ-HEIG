#include <stdio.h>

int main(int argc, const char *argv[])
{
	unsigned long n = 0;
	scanf("%lu", &n);
	printf("%lu ", n);
	while (n > 1)
	{
		if (n % 2)
		{
			n = (n * 3) + 1;
		}
		else
		{
			n /= 2;
		}
		printf("%lu ", n);
	}
	return 0;
}