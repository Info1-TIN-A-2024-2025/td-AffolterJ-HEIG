#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(int argc, const char *argv[])
{
	// Variables locales
	float x = 0;
	double y = 0;
	// int d;
	// int r;
	double d;
	double r;
	const double C = 299792458.0;	   // Vitesse de la lumière en m/s
	const double CONVTOMILH = 2.23694; // Convertion de m/s en mph

	// Affiche la valeur min et max du type char
	printf("The range of variable type char is: %d...%d\n", CHAR_MIN, CHAR_MAX);
	// Affiche la valeur min et max du type short
	printf("The range of variable type short is: %d...%d\n", SHRT_MIN, SHRT_MAX);
	// Affiche la valeur min et max du type float
	printf("The range of variable type float is: %f...%f\n", FLT_MIN, FLT_MAX);
	printf("The range of variable type float is: %e...%e\n", FLT_MIN, FLT_MAX);
	// Affiche la valeur min et max du type double
	printf("The range of variable type double is: %lf...%lf\n", DBL_MIN, DBL_MAX);
	printf("The range of variable type double is: %le...%le\n", DBL_MIN, DBL_MAX);
	// Affiche la valeur min et max du type long double
	printf("The range of variable type long double is: %Le...%Le\n", LDBL_MIN, LDBL_MAX);

	// Test de rentrer une valeur très petite dans un float
	x = 1e-40; // 1.10^-40
	// L'afficher
	printf("Valeur de x:%f\n", x);
	printf("%.50f\n", x);
	printf("%e\n", x);

	// Même chose avec double
	y = 1e-40; // 1.10^-40
	// L'afficher
	printf("Valeur de y:%lf\n", y);
	printf("%.50lf\n", y);
	printf("%e\n", y);

#if 0 // Ignore dé le préprocesing
	// Calcul
	d = 4;
	r = d / 0;	// Crash, division par 0 => test
	printf("r = %d\n", r);
#endif

	// Calcul
	d = 42.;
	r = d / 0;				// Crash, division par 0 => test
	printf("r = %lf\n", r); // Division by zero => infinity

	// affichage de c en miles
	printf("Vitesse de la lumière en miles par heure: %lf\n", (CONVTOMILH * C));

#if 0
	// Passer à un endroit ou la vitesse de la liumère est deux fois plus petite
	C = C / 2;
#endif

	return 0;
}