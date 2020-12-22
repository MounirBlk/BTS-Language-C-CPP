#include<stdlib.h>
#include<stdio.h>

int main (void){

	/*Déclarer les variables*/
	float A,B,resultat;
	char operation,bidon;
	
	/*Saisir des données avec l'affichage*/
	printf("Saisir un 1er Nombre réel dans la variable \n");
	scanf("%f",&A);

	printf("Saisir un 2ème Nombre réel dans la variable \n");
	scanf("%f",&B);

	printf("Entrez une opération arithmétique souhaitée: \n");
	printf("a:addition,s:soustraction,m:multiplication,d:division.\n");
	scanf("%c%c",&bidon,&operation);
	

	if (operation=='a'){
		resultat=(A+B);
		printf("Le résultat de l'opération est %f\n",resultat);
	}

	if (operation=='s'){
		resultat=(A-B);
		printf("Le résultat de l'opération est %f\n",resultat);
		
	}

	if (operation=='m'){
		resultat=(A*B);
		printf("Le résultat de l'opération est %f\n",resultat);
		
	}

	if (operation=='d'){
		resultat=(A/B);
		printf("Le résultat de l'opération est %f\n",resultat);
		
	}
	

	return EXIT_SUCCESS;
}
	
