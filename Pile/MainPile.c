#include "BiblioPile.h"
#include<stdio.h>//pour pouvoir utiliser printf,... ici
int main()
{
	TP *MaPile=PileVide();
	printf("\nEstPileVide=%d",EstPileVide(MaPile));
	MaPile=Empiler(MaPile,2);
	MaPile=Empiler(MaPile,5);
	MaPile=Empiler(MaPile,6);
	printf("\nLe sommet de la pile est:%d",SommetPile(MaPile));
	return 0;
}

