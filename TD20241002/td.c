#include <stdio.h>

int main(int argc, const char *argv[])
{
	// Variables locales
	double u = 0;
	double r = 0; // Valeur de résistance entre 0 et 4Gohm
	double i = 0;

	printf("Calcul du courant dans une résistance\n");

	// Récupération de la valeur de la résistance
	printf("Entrer la valeur de la résistance [Ω]: ");
	scanf("%lf", &r);

	// Contrôle de la valeur de la résistance
	if (r <= 0)
	{
		printf("La valeur de R est erronée, elle doit être plus grande que 0\n");

		return 1;
	}

	// Récupérer la valeur de la tension
	printf("Entrer la valeur de la tension [V]: ");
	scanf("%lf", &u);

	// Calcul de la valeur du courant
	i = u / r;
	// Affichage du courant
	printf("\n Le courant dans la résistance est de %.3E [A]\n", i);

	return 0;
}