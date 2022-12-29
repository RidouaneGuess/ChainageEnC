#include<stdio.h>
#include<stdlib.h>
#include "BiblioListe.h"
TypeCellule *ListeVide()
{
	TypeCellule *L;
	L=NULL;
	return L;
}
int EstListeVide(TypeCellule *Liste)
{
	return(Liste==NULL);
}
int EstListePleine(TypeCellule *Liste)
{
	return(0);
}
TypeDonnee SaisieDonnee()
{
	TypeDonnee Donnee;
	printf("\nEntrez la donnée:");
	scanf("%f",&Donnee);
	return Donnee;
}
void AfficherDonnee(TypeDonnee Donnee)
{
	printf("%f",Donnee);
}
TypeCellule *InsererTete(TypeCellule *AncienneListe,TypeDonnee Donnee)
{
	TypeCellule *nouv;
	nouv=(TypeCellule*)malloc(sizeof(TypeCellule));
	nouv->Donnee=Donnee;
	nouv->Suivant=AncienneListe;
	return nouv;
}
TypeCellule *SaisieListeEnvers()
{
	TypeCellule *Liste=ListeVide();
	TypeDonnee elem;
	char rep;
	printf("\nVous ne voulez pas, une liste tout simplement n'est ce pas?");
	scanf("%s",&rep);
		while(rep=='o')
		{
			elem=SaisieDonnee();
			Liste=InsererTete(Liste,elem);
			printf("\n%f A ETE INSERER EN TETE DE LISTE.\nVOUS VOULEZ CONTINUER A INSERER?",elem);
			scanf("%s",&rep);
		}
	return Liste;
}


