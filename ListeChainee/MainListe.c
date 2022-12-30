#include "BiblioListe.h"
#include <stdlib.h>
int main()
{
	system("clear");
	TypeCellule *L=SaisieListeEnvers();
	L=InsererTete(L,0.1);
	L=InsererQueue(L,0.2);
	TypeCellule *L1;
	AfficherListe(L);
	L1=SaisieListeEndroit();
	AfficherListe(L1);
	Liberation(&L);
	Liberation(&L1);
	AfficherListe(L);
	return 0;
}
