#include<stdlib.h>
#include<stdio.h>

int main (void){

	/*Déclarer les variables*/
	int jourM,heureM;
	
	/*Saisir des données avec l'affichage*/
	
	

	printf("Saisir un jour de la semaine pour les jours d'ouverture: \n");

	printf("1:lundi\n");
	printf("2:mardi\n");
	printf("3:mercredi\n");
	printf("4:jeudi\n");
	printf("5:vendredi\n");
	printf("6:samedi\n");
	printf("7:dimanche\n");
	scanf("%d",&jourM);
	
	printf("Saisir une Heure ");
	scanf("%d",&heureM);

	if ((jourM==7 || jourM==1) || (heureM > 17 || heureM <8) || (heureM>12 && heureM <14) || (jourM==6) && (heureM>12 || heureM <8))
		{printf("Magasin Fermé\n");}
	else
		printf("Magasin Ouvert\n");
		

	return EXIT_SUCCESS;
}



	

	

	
