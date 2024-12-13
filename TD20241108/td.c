#include <stdio.h>

int main(int argc, const char *argv[])
{
#if 0
	char answer = 0;
	printf("Avez-vous correctement révisé les maths (O/N) ? ");
	goto plus_bas;
	answer = getchar();
	switch (answer)
	{
	case 'O':
	case 'o':
	case 'Y':
	case 'D':
	case 'E':
	case 'S':
		puts("OK");
		break;
	case 'N':
	case 'n':
	case 'H':
		puts("NG");
		break;
	default:
		puts("??");
		break;
	}

plus_bas:
	puts("Plus bas, c'est la !");
#endif
#if 0
	char i = 0;

	for (i = 0; i <= 42; i++)
	{
		if (!(i % 7))
		{
			continue;
		}
		printf("%d | ", i);
	}
#endif

	double x = 0;
	int y = 1;

	y = ((x >= -1) && (x <= 0)) || ((x >= 1) && (x <= 2)) ? 0 : 1;

	return 0;
}