#include "BiblioPile.h"
#include<stdio.h>
#include<stdlib.h>
int var;
TP *PileVide()
{
	TP *Pile;
	Pile=(TP*)malloc(sizeof(TP));
	Pile->TailleActuelle=0;
	Pile->Donnee=-1;//suposée comme donnée d'une Pile Vide.
	Pile->Suivant=NULL;
	return Pile;
}
int EstPileVide(TP *Pile)
{
	return(Pile->TailleActuelle==0);
}
int EstPilePleine(TP *Pile)
{
	return(0);//Gestion Dynamique, la pile ne sera jamais pleine :).
}
TP *Empiler(TP *Pile,int elem)
{
	TP *nouv;
	if(EstPilePleine(Pile))
		printf("\nImpossible d'empiler un élément,sorry, la pile est déjà pleine.");
	else
	{
	 nouv=(TP*)malloc(sizeof(TP));
	 nouv->Donnee=elem;
	 nouv->TailleActuelle=Pile->TailleActuelle+1;
	 nouv->Suivant=Pile;
	 Pile=nouv;
	}
	return Pile;
}
TP *Depiler(TP *Pile,int *DonneeDepilee)
{
	TP *ptr;
	if(EstPileVide(Pile))
		printf("\nRien à depiler, la pile est vide.");
	else
	{
		*DonneeDepilee=Pile->Donnee;
		ptr=Pile;
		Pile=Pile->Suivant;
		free(ptr);
	}
	return Pile;
}
int SommetPile(TP *Pile)
{
	int som;
	if(EstPileVide(Pile))
		printf("\nLA PILE EST VIDE.");        else{
	som=Pile->Donnee;
	}
	return som;
}
void AffichagePile(TP *Pile)
{
	TP *ptr;
	if(EstPileVide(Pile))
		printf("\nLA PILE EST VIDE.");
	else
	{
	     ptr=Pile;
	     while(!EstPileVide(ptr))
	     {
		     printf("\n[%d]",ptr->Donnee);
		     ptr=ptr->Suivant;
	     }
	}
}
TP *NettoyerPile(TP *Pile)
{
	if(EstPileVide(Pile))
		printf("\nLA PILE EST VIDE.");
	else
	{
		Pile=Depiler(Pile,&var);
		Pile=NettoyerPile(Pile);
	}
	return Pile;
}


	  
	

