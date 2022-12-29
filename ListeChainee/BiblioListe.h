typedef float TypeDonnee;
typedef struct Cell
{
	TypeDonnee Donnee;
	struct Cell *Suivant;
}TypeCellule;
TypeCellule *ListeVide();
int EstListeVide(TypeCellule *Liste);
int EstListePleine(TypeCellule *Liste);
TypeDonnee SaisieDonnee();
void AfficherDonnee(TypeDonnee Donnee);
TypeCellule *InsererTete(TypeCellule *AncienneListe,TypeDonnee Donnee);
TypeCellule *SaisieListeEnvers();
TypeCellule *InsererQueue(TypeCellule *AncienneListe,TypeDonnee Donnee);
TypeCellule *SaisieListeEndroit();
void AfficherListe(TypeCellule *Liste);
TypeCellule *InsererPosition(TypeCellule *AncienneListe,int Position);
TypeCellule *InsererAvantDonnee(TypeCellule *AncienneListe,TypeDonnee Donnee);
TypeCellule *InsererApresDonnee(TypeCellule *AncienneListe,TypeDonnee Donnee);
TypeCellule *SupprimerTete(TypeCellule *AncienneListe);
TypeCellule *SupprimerQueue(TypeCellule *AncienneListe);
TypeCellule *SupprimerPosition(TypeCellule *AncienneListe,int Position);
TypeCellule *SupprimerApresDonnee(TypeCellule *AncienneListe,TypeDonnee Donnee);
TypeCellule *SupprimerAvantDonnee(TypeCellule *AncienneListe,TypeDonnee Donnee);

