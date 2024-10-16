#include <stdio.h>
#include <math.h>

int main(int argc, const char *argv[])
{
	// Variables locales
	int n = 0;
	unsigned char count = 0;

	/*
	double alpha = 60;
	double alphaRad = 0;
	double valCos = 0;
	double valSin = 0;
	double valTan = 0;
	double sinSurCos = 0;
*/
	float alpha = 60;
	float alphaRad = 0;
	float valCos = 0;
	float valSin = 0;
	float valTan = 0;
	float sinSurCos = 0;

	// Récupération de la valeur
	printf("Entrer la valeur: ");
	scanf("%d", &n);

	// Base 10
	//  Récupération du nombre de digits
	count = (int)log10(n) + 1;

	// Afficher le nombre de digits
	printf("\nLe nombre de digits de cette valeur en base 10 est %u\n", count);

	// Base 2
	// Récupération du nombre de digits
	count = (int)log2(n) + 1;

	// Afficher le nombre de digits
	printf("\nLe nombre de digits de cette valeur en base 2 est %u\n", count);

	// Base 16
	// Récupération du nombre de digits
	count = (int)(log10(n) / log10(16)) + 1;

	// Afficher le nombre de digits
	printf("\nLe nombre de digits de cette valeur en base 16 est %u\n", count);

	//-----------------
	// Partie 2

	printf("\nalpha vaux %lf", alpha);

	alphaRad = alpha * M_PI / 180;
	valCos = cos(alphaRad);
	valSin = sin(alphaRad);

	printf("\nLe cos de alpha est %lf et le sin est %lf\n", valCos, valSin);

	valTan = tan(alphaRad);
	sinSurCos = valSin / valCos;

	printf("Tangente = %.6lf, Sin/Cos = %.6lf \nTan - Sin/Cos = %.10e\n", valTan, sinSurCos, (valTan - sinSurCos));

	return 0;
}