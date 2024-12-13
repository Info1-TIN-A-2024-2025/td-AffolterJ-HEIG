#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
#if 0
	int result = 0;
	char nbDivisions = 0;
	result = atoi(argv[1]);
	while (result >= 10)
	{
		result /= 10;
		nbDivisions++;
	}
	printf("Le nombre %d peut être divisé %d fois par 10\n", atoi(argv[1]), nbDivisions);
#endif

	int entree;
	char notdivisable;
	do
	{
		printf("Entrer un entier multiple de 3 ou 5:");
		scanf("%d", &entree);
		if ((entree % 3) == 0)
		{
			notdivisable = 0;
			printf("%d est un multiple de 3\n", entree);
		}
		else if ((entree % 5) == 0)
		{
			notdivisable = 0;
			printf("%d est un multiple de 5\n", entree);
		}
		else
		{
			notdivisable = 1;
		}
	} while (notdivisable);

	return 0;
}