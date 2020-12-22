#include<stdlib.h>
#include<stdio.h>

int main (void){

	/*Déclarer les variables*/
	int jour,mois,annee;
	char nom,prenom,poubelle;

	/*Saisir des données avec l'affichage*/
	printf("Saisir votre initiale de prénom: ");
	scanf("%c",&prenom);
	scanf("%c",&poubelle);

	printf("Saisir votre initiale de nom: ");
	scanf("%c",&nom);
	scanf("%c",&poubelle);

	printf("Saisir votre jour de naissance: ");
	scanf("%d",&jour);

	printf("Saisir votre mois de naissance: ");
	scanf("%d",&mois);
	
	printf("Saisir votre année de naissance: ");
	scanf("%d",&annee);


	/*Affichage des données saisies*/
	printf("Votre prénom est: %c \n",prenom);
	printf("Votre nom est: %c \n",nom);
	printf("Votre Date de naissance est: %d/%d/%d \n",jour,mois,annee);

	
return EXIT_SUCCESS;
}

