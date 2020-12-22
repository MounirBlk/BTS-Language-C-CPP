#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Déclaration d'une structure nombre complexe avec 4 variables (réel,imaginaire, module, argument) */

    struct comp{

    float a;
    float b;
    float mod;
    float arg;

    };

    /* déclaration de fonctions avec structure */

    struct comp choixformesaisie();
    struct comp affichagecomplexe();
    struct comp saisieCarte(); // saisie des nombres complexes en cartésiens + conversion carte + polaire
    struct comp saisiePol();  // saisie des nombres complexes en polaire + conversion polaire + carte
    struct comp polcarte(struct comp conv); // conversion d'une forme polaire à une forme cartésienne
    struct comp cartepol(struct comp conv); // réalise l'inverse du prototype polcarte
    struct comp calc(struct comp mario,struct comp luigi); // prototype permettant de calculer les nombres complexes


    /*---------------------------------------Programme principal------------------------------------------*/
int main(void){
    /*Déclaration des variables + variables structurées */
    /* variable blanc pour saisir des caractères à la suite ou la fonction fflush stdin pour vider le buffer */

    struct comp c1;
    struct comp c2;
    struct comp c3;

    c1 = choixformesaisie(c1);
    /* Affichage de données par la saisie première avec l'appel de la fonction affichagecomplexe */
    affichagecomplexe(c1);

    /*Deuxième choix cartesienne ou polaire*/

    c2 = choixformesaisie(c2);
     /* Affichage de données par la saisie seconde */

    affichagecomplexe(c2);
	/* appel de la fonction operation arithmétique */

	printf("Procedons maintenant à une operation arithmetique : \n");

    c3 = calc(c1,c2);
    /* Affichage de données issue de la fonction calc*/

    c3 = affichagecomplexe(c3);

   	return EXIT_SUCCESS;
}





/* définition des fonctions à l'aide de la structure comp */

struct comp choixformesaisie(){
    /* Choix cartesienne ou polaire*/
    /* la variable structurée x est la variable c1 et c2 situé dans le programme principal */
    /* Tant que la structure "faire tant que" est vraie, elle continue à exécuter les instructions */
    /* Il faut donc appuyer sur c,C ou bien p,P au clavier pour sortir et continuer la suite du programme */

    struct comp x;
    char choix;
    do{
        /* mettre un fflush(stdin) pour éviter que le printf s'affiche deux fois de suite */

        /* fflush(stdin); */
        printf("Entrez la forme: Cartesienne (lettre c) ou Polaire (lettre p) ?");
        scanf("%c",&choix);
        /* fflush stdin pour éviter une boucle infinie */
        fflush(stdin);

        if ((choix=='c')||(choix=='C')){
        x = saisieCarte(x);
        }

        if ((choix=='p')||(choix=='P')){
        x = saisiePol(x);
        }
    }while((choix!='c') && (choix !='C') && (choix !='p') && (choix !='P'));

    return x;
}

struct comp affichagecomplexe(){
  /* déclaration de la variable structurée x qui représente c1 et c2 dans le programme principal */

   struct comp x;

   printf("Forme Cartesienne \tZ= %f + %f*i\n",x.a,x.b);
   printf("Forme Polaire \t\tZ= [%f;%f]\n",x.mod,x.arg);
  }

struct comp saisieCarte(){
    /* déclaration de variables structurées */

    struct comp carte;
    /* saisie de données par l'utilisateur */

    printf("Vous avez choisi la forme cartesienne : Z=a+ib\n");
    printf("Entrez le nombre reel a: ");
    scanf("%f",&carte.a);
    printf("Entrez le nombre imaginaire b: ");
    scanf("%f",&carte.b);
    /*Conversion de cartesienne à polaire*/

    carte = cartepol(carte);

    return carte;
}

struct comp saisiePol(){
    /* déclaration de variables structurées */

    struct comp pol;
    /* saisie de données par l'utilisateur */

    printf("Vous avez choisi la forme polaire : [module rho;argument teta]\n");
    printf("Entrez un module r: ");
    scanf("%f",&pol.mod);
    printf("Entrez un argument rho: ");
    scanf("%f",&pol.arg);
    /*Conversion de polaire à cartésienne*/

    pol = polcarte(pol);

	return pol;
      }

struct comp cartepol(struct comp conv){
   /*Conversion de la forme cartésienne à la forme polaire*/

   conv.mod=sqrt(pow(conv.a,2)+pow(conv.b,2));
   conv.arg=atan(conv.b/conv.a);

    return conv;
}

struct comp polcarte(struct comp conv){
   /*Conversion de la forme polaire à la forme cartésienne*/

    conv.a=conv.mod*cos(M_PI*conv.arg/180);
    conv.b=conv.mod*sin(M_PI*conv.arg/180);

   return conv;
}


struct comp calc(struct comp s1,struct comp  s2){
    /* déclaration de variables structurées */

    struct comp s3;
    /* saisie de données par l'utilisateur */

    char operation,blanc;
    printf("Choisissez l'operation: (+),(-),(*),(/): ");
    scanf("%c%c",&blanc,&operation);

    	switch(operation){
		case '+':
			s3.a=s1.a+s2.a;
			s3.b=s1.b+s2.b;
			s3.mod=sqrt(pow(s3.a,2)+pow(s3.b,2));
            s3.arg=atan(s3.b/s3.a);
			break;

		case '-':
			s3.a=s1.a-s2.a;
			s3.b=s1.b-s2.b;
			s3.mod=sqrt(pow(s3.a,2)+pow(s3.b,2));
            s3.arg=atan(s3.b/s3.a);
			break;

		case '*':
			s3.mod=s1.mod*s2.mod;
			s3.arg=s1.arg*s2.arg;
			s3.a=s3.mod*cos(M_PI*s3.arg/180);
            s3.b=s3.mod*sin(M_PI*s3.arg/180);
			break;

		case '/':
			s3.mod=s1.mod/s2.mod;
			s3.arg=s1.arg/s2.arg;
			s3.a=s3.mod*cos(M_PI*s3.arg/180);
            s3.b=s3.mod*sin(M_PI*s3.arg/180);
			break;

		default:
			printf("Operateur invalide, arret du programme \n");
			exit(0);
			break;
	}
    return s3;
}
