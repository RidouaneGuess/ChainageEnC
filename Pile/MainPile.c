#include "BiblioPile.h"
#include<stdio.h>//pour pouvoir utiliser printf,... ici
#include<stdlib.h>//pour system
int main()
{
	system("clear");
	int var;
	TP *MaPile=PileVide();
	printf("\nEstPileVide=%d",EstPileVide(MaPile));
	MaPile=Empiler(MaPile,2);
	MaPile=Empiler(MaPile,5);
	MaPile=Empiler(MaPile,6);
	AffichagePile(MaPile);
	printf("\nMa pile a %d élément(s).",MaPile->TailleActuelle);
	MaPile=Depiler(MaPile,&var);
	printf("\nLa donnée depilée est : %d",var);
	printf("\nApres depillage, Ma pile a %d élément",MaPile->TailleActuelle);
	printf("\nLe sommet de la pile est:%d",SommetPile(MaPile));
	printf("\n###############################");
	printf("\nAvant Nettoyage:");
	printf("\nEstPileVide=%d",EstPileVide(MaPile));
	MaPile=NettoyerPile(MaPile);
	printf("\n\nAprès Nettoyage:");
	printf("\nEstPileVide=%d",EstPileVide(MaPile));
	return 0;
}

