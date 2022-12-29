#include<stdio.h>
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

