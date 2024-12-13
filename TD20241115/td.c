#include <stdio.h>

int main(int argc, const char *argv[])
{
	int largeurPneu = 0;
	int pourcentageLargeur = 0;
	int diametreJantePouce = 0;
	double diametreJanteMm = 0;
	double diamètreRouecm = 0;
	double distanceAParcourire = 0;
	
	if(argc() != 3)
	{

	}

	sscanf(argv[1],"%d/%dR%d", &largeurPneu, &pourcentageLargeur, &diametreJantePouce);

	return 0;
}