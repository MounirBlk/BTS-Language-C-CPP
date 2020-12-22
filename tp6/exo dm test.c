#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* D�claration d'une structure nombre complexe avec 4 variables (r�el,imaginaire, module, argument) */

    struct comp{

    float a;
    float b;
    float mod;
    float arg;

    };

    /* d�claration de fonctions avec structure */

    struct comp choixformesaisie();
    struct comp affichagecomplexe();
    struct comp saisieCarte(); // saisie des nombres complexes en cart�siens + conversion carte + polaire
    struct comp saisiePol();  // saisie des nombres complexes en polaire + conversion polaire + carte
    struct comp polcarte(struct comp conv); // conversion d'une forme polaire � une forme cart�sienne
    struct comp cartepol(struct comp conv); // r�alise l'inverse du prototype polcarte
    struct comp calc(struct comp mario,struct comp luigi); // prototype permettant de calculer les nombres complexes


    /*---------------------------------------Programme principal------------------------------------------*/
int main(void){
    /*D�claration des variables + variables structur�es */
    /* variable blanc pour saisir des caract�res � la suite ou la fonction fflush stdin pour vider le buffer */

    struct comp c1;
    struct comp c2;
    struct comp c3;

    c1 = choixformesaisie(c1);
    /* Affichage de donn�es par la saisie premi�re avec l'appel de la fonction affichagecomplexe */
    affichagecomplexe(c1);

    /*Deuxi�me choix cartesienne ou polaire*/

    c2 = choixformesaisie(c2);
     /* Affichage de donn�es par la saisie seconde */

    affichagecomplexe(c2);
	/* appel de la fonction operation arithm�tique */

	printf("Procedons maintenant � une operation arithmetique : \n");

    c3 = calc(c1,c2);
    /* Affichage de donn�es issue de la fonction calc*/

    c3 = affichagecomplexe(c3);

   	return EXIT_SUCCESS;
}





/* d�finition des fonctions � l'aide de la structure comp */

struct comp choixformesaisie(){
    /* Choix cartesienne ou polaire*/
    /* la variable structur�e x est la variable c1 et c2 situ� dans le programme principal */
    /* Tant que la structure "faire tant que" est vraie, elle continue � ex�cuter les instructions */
    /* Il faut donc appuyer sur c,C ou bien p,P au clavier pour sortir et continuer la suite du programme */

    struct comp x;
    char choix;
    do{
        /* mettre un fflush(stdin) pour �viter que le printf s'affiche deux fois de suite */

        /* fflush(stdin); */
        printf("Entrez la forme: Cartesienne (lettre c) ou Polaire (lettre p) ?");
        scanf("%c",&choix);
        /* fflush stdin pour �viter une boucle infinie */
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
  /* d�claration de la variable structur�e x qui repr�sente c1 et c2 dans le programme principal */

   struct comp x;

   printf("Forme Cartesienne \tZ= %f + %f*i\n",x.a,x.b);
   printf("Forme Polaire \t\tZ= [%f;%f]\n",x.mod,x.arg);
  }

struct comp saisieCarte(){
    /* d�claration de variables structur�es */

    struct comp carte;
    /* saisie de donn�es par l'utilisateur */

    printf("Vous avez choisi la forme cartesienne : Z=a+ib\n");
    printf("Entrez le nombre reel a: ");
    scanf("%f",&carte.a);
    printf("Entrez le nombre imaginaire b: ");
    scanf("%f",&carte.b);
    /*Conversion de cartesienne � polaire*/

    carte = cartepol(carte);

    return carte;
}

struct comp saisiePol(){
    /* d�claration de variables structur�es */

    struct comp pol;
    /* saisie de donn�es par l'utilisateur */

    printf("Vous avez choisi la forme polaire : [module rho;argument teta]\n");
    printf("Entrez un module r: ");
    scanf("%f",&pol.mod);
    printf("Entrez un argument rho: ");
    scanf("%f",&pol.arg);
    /*Conversion de polaire � cart�sienne*/

    pol = polcarte(pol);

	return pol;
      }

struct comp cartepol(struct comp conv){
   /*Conversion de la forme cart�sienne � la forme polaire*/

   conv.mod=sqrt(pow(conv.a,2)+pow(conv.b,2));
   conv.arg=atan(conv.b/conv.a);

    return conv;
}

struct comp polcarte(struct comp conv){
   /*Conversion de la forme polaire � la forme cart�sienne*/

    conv.a=conv.mod*cos(M_PI*conv.arg/180);
    conv.b=conv.mod*sin(M_PI*conv.arg/180);

   return conv;
}


struct comp calc(struct comp s1,struct comp  s2){
    /* d�claration de variables structur�es */

    struct comp s3;
    /* saisie de donn�es par l'utilisateur */

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
