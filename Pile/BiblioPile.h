typedef struct Pile
{
	int Donnee;
	int TailleActuelle;
	struct Pile *Suivant;
}TP;
TP *PileVide();
int EstPileVide(TP *Pile);
int EstPilePleine(TP *Pile);
TP *Empiler(TP *Pile,int elem);
TP *Depiler(TP *Pile,int *DonneeDepilee);
int SommetPile(TP *Pile);
void AffichagePile(TP *Pile);
TP *NettoyerPile(TP *Pile);
