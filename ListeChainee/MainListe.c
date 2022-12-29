#include "BiblioListe.h"
#include <stdlib.h>
int main()
{
	system("clear");
	TypeCellule *L=SaisieListeEnvers();
	TypeCellule *L1;
	AfficherListe(L);
	L1=SaisieListeEndroit();
	AfficherListe(L1);
	return 0;
}
