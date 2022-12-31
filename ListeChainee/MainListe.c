#include "BiblioListe.h"
#include <stdlib.h>
int main()
{
	system("clear");
	/*TypeCellule *L=SaisieListeEnvers();
	L=InsererTete(L,0.1);
	L=InsererQueue(L,0.2);
	TypeCellule *L1;
	AfficherListe(L);
	L1=SaisieListeEndroit();
	AfficherListe(L1);
	Liberation(&L);
	Liberation(&L1);
	AfficherListe(L);
	*/
	TypeCellule *L2;
	L2=InsererTete(L2,1.1);
	L2=InsererTete(L2,2.2);
	L2=InsererTete(L2,3.3);
	L2=InsererPosition(L2,5,5);
	AfficherListe(L2);
	return 0;
}
