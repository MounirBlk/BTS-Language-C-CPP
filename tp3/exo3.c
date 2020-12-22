#include<stdlib.h>
#include<stdio.h>
#define N 3

int main (void){

	/*Déclarer les variables*/
	int i;
	float somme,produit,moyenne,nombre;
	
	/*Initialisation des valeurs*/
	i=1;
	somme=0;
	produit=1;

	/*Saisir des données avec l'affichage*/
	
	/* while (i<=N){
		printf("Veuillez saisir le nombre %d: ",i);
		scanf("%f",&nombre);
		somme=somme+nombre;
		produit=produit*nombre;
		i=i+1;
		} */

	/* for(i=1; i<=N; i=i+1){
		printf("ecrire un nombre %d: ",i);
		scanf("%f",&nombre);
		produit=produit*nombre;
		somme=somme+nombre;
		} */

	/* do{
		printf("ecrire un nombre %d: ",i);
		scanf("%f",&nombre);
	
		i=i+1;
		produit=produit*nombre;
		somme=somme+nombre;
		} */
	
	while(i<=N);

	moyenne=somme/N;
	printf("La somme des nombres saisis est egal à %f\n",somme);
	printf("Le produit des nombres saisis est egal à %f\n",produit);
	printf("La moyenne des nombres saisis est egal à %f\n",moyenne);

return EXIT_SUCCESS;
}

