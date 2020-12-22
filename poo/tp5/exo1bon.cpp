#include <iostream>
/* pour que le exit(failure) marche, on inclut stdlib.h */
#include <stdlib.h>

using namespace std;

/* classe mere */
class Personne {
    /* visibilité protected pour que les classes filles puissent accéder aux attributs */
    protected:
    string nom;
    string prenom;
    int age;
    public:
    /* constructeur par defaut */
    Personne();

    /* constructeur surchargé */
    Personne(string n, string p, int a);
    void affiche();
};

/* premiere classe fille */
class Etudiant:public Personne {
    private:
    string classe;

    float note[3]={0,0,0};
    public:
    /* constructeur par defaut */
    Etudiant();

    Etudiant(string , string , int , string );
    void saisieNotesEtudiant();
    void affiche();
};

class Enseignant:public Personne {
    private:
    string matiere;
    int nbHeuresCours;
    int labo;
    int suivi;
    public:

    /* constructeur par defaut */
    Enseignant();

    /* constructeur surchargé */
    Enseignant(string , string , int , int );
    void specialite();
    void options();
    void affiche();
};


/* ---------------------Programme principal ------------------- */
int main(void){


  /* instanciation de la classe Etudiant*/

    Etudiant Etudiant1 ;    // appel du constructeur par défaut
    Etudiant1.Personne::affiche();  // méthode affiche de la classe Personne
    Etudiant1.saisieNotesEtudiant();
    Etudiant1.affiche();    // méthode affiche de la classe Etudiant
    cout<<endl<<endl;
    
    Etudiant Etudiant2("Nirkos","Mounir",20,"licence(futur)");  // appel du constructeur surchargé
    Etudiant2.Personne::affiche();  // méthode affiche de la classe Personne
    Etudiant2.saisieNotesEtudiant();
    Etudiant2.affiche();    // méthode affiche de la classe Etudiant


 /* instanciation de la classe Enseignant*/
    cout<<"\n\t\t -----------Enseignant ---------------"<<endl;
    cout<<endl<<endl;
    Enseignant Enseignant1; // appel du constructeur par défaut
    Enseignant1.specialite();
    Enseignant1.options();
    Enseignant1.affiche(); // méthode affiche de la classe Enseignant
    cout<<endl<<endl;
    
    Enseignant Enseignant2("Levan","Hung",59,72); // appel du constructeur surchargé
    Enseignant2.specialite();
    Enseignant2.options();
    Enseignant2.affiche();

  return EXIT_SUCCESS;
}



/* --------------------------------- Définitions de méthodes --------------------------- */

/* constructeur par defaut classe mère (personne) */
Personne::Personne(){
    cout<<"Entrez votre nom :";
    cin>>nom;
    cout<<"Entrez votre prenom :";
    cin>> prenom;
    cout<<"Entrez votre age :";
    cin>> age;
}

/* constructeur surchargé avec liste initialisation */
Personne::Personne(string n, string p, int a):nom(n),prenom(p),age(a){
}

void Personne::affiche(){

  cout<<"Nom : " << nom<< "\t Prenom : " << prenom<< "\t age : " <<age<<" ans";
}



/* ---------------------definition de méthodes issues classe etudiant -----------------*/


/* constructeur par défaut de la classe fille (etudiant)  */
Etudiant::Etudiant():Personne(){
  cout<<"Entrez la section : ";
  cin>>classe;
  cout<<endl;
}

/* constructeur surchargé, liste d'initialisation, classe fille */
/* classe(clas) est identique que classe = clas */
Etudiant::Etudiant(string nom, string prenom, int age, string clas):Personne(nom,prenom,age),classe(clas){

}

/* méthode pour saisir les notes */
void Etudiant::saisieNotesEtudiant(){
  /* déclaration de variables */
   char choix,ouinon;
   /* variables pour stocker les notes */
   float resprog,resres,respro;
   cout<<"\n\nVous devez saisir la note des matieres suivantes :"<<endl;
   cout<<"\t Entrez [1] pour Informatique"<<endl;
   cout<<"\t Entrez [2] pour Reseaux"<<endl;
   cout<<"\t Entrez [3] pour Projet"<<endl;
   cout<<endl;

   /* tant que on n'appuie pas sur n, on reste dans la boucle */
   while(ouinon!='n'){
    /* boucle pour saisir de 1 à 3 options uniquement */
    do{
      cout<<"\t Quelle matiere choississez-vous ?";
      cin>> choix;
    }while(choix<'1' || choix>'3');

    switch (choix)
      {
      case '1':
	       cout<<"\t Entrez votre note en informatique :";
	       cin>> resprog;
	       /* puisque la methode saisieNotesEtudiant est dans la classe Etudiant */
	       /* on n'a pas besoin de déclarer l'attribut note[0] dans cette méthode */
	       /* stocké dans le premier element */
           note[0] = resprog;

	       /* affichage pour demander à l'utilisateur de saisir à nouveau */
	       cout<<"Souhaitez-vous saisir d'autres notes (tapez 'o' ou 'n') ?";

	       /* taper n va sortir de la boucle, o pour rester dans le menu */
	       cin>> ouinon;
	break;

      case '2':
           cout<<"\t Entrez votre note en reseaux :";
           cin>> resres;

           /* stocké dans le deuxieme element du tableau float note[3] */
	       note[1] = resres;

           /* affichage pour demander à l'utilisateur de saisir à nouveau */
           cout<<"Souhaitez-vous saisir d'autres notes (tapez 'o' ou 'n') ?";
	       cin>> ouinon;
	break;

      case '3':
           cout<<"\t Entrez votre note de projet :";
           cin>> respro;

           /* affichage pour demander à l'utilisateur de saisir à nouveau */
           cout<<"Souhaitez-vous saisir d'autres notes (tapez 'o' ou 'n') ?";
	       cin>> ouinon;

	       /* stocké dans le deuxieme element du tableau float note[3] */
	       note[2] = respro;

	break;

	 default:
           cout<<"Sorti du programme";
           exit(EXIT_FAILURE);
    break;
      }
   } /* fin de la boucle tant que */
}

/* affichage des notes + moyenne, pas besoin de déclarer note[3] car elle est déjà */
/* déclarée dans la classe "class Etudiant:public Personne" */
void Etudiant::affiche(){
  cout<<endl;
  cout<<"Mme/Mr " <<nom<< ". Vous etes en formation :'"<<classe<< "'"<<endl;
  cout<<"\t Cours suivis et notes :"<<endl;
  cout<<"\t\t Programmation : "<<note[0]<<""<<endl;
  cout<<"\t\t Reseaux : "<<note[1]<<""<<endl;
  cout<<"\t\t Projet : "<<note[2]<<""<<endl;
  cout<<"\t Moyenne de l'etudiant : "<<(note[0]+note[1]+note[2])/3<<""<<endl;

}






/* ---------------------definition de méthodes issues classe enseignant -----------------*/

/* constructeur par défaut de la classe fille (etudiant)  */
Enseignant::Enseignant():Personne(){
  cout<<"Combien d'heures de cours effectuez-vous ?";
  cin>>nbHeuresCours;
  cout<<endl;
}

/* constructeur surchargé, liste d'initialisation, classe fille */
/* nbHeuresCours(hcour) est identique que nbHeuresCours = hcour */
Enseignant::Enseignant(string nom, string prenom, int age, int hcour):Personne(nom,prenom,age),nbHeuresCours(hcour){

}


void Enseignant::specialite(){
   /* déclaration de variables */
   char special[25];
   /* variables pour stocker les notes */
   cout<<"\n\n Mme/Mr " <<nom<< ". Veuillez entrer votre specialite :"<<endl;
   cout<<"\t Entrez [i] pour Informatique"<<endl;
   cout<<"\t Entrez [r] pour Reseaux"<<endl;
   cout<<"\t Entrez [p] pour Projet"<<endl;
   cout<<"\t Faites votre choix. (seule la 1ere lettre compte) : ";
   cin>> special;

   /* une lettre correspond à une matière */
   /* l'attribut matiere n'a pas besoin d'être déclarée car elle est déjà faite dans la classe fille */
   
   if(special[0]=='i'){
      matiere = "informatique";
   }
   if(special[0]=='r'){
      matiere = "reseau";
   }
   if(special[0]=='p'){
      matiere = "projet";
   }
   cout<<endl;
}

/* méthode de saisie heure de labo + suivi */
void Enseignant::options(){
  cout<<"\t Combien avez-vous d'heures de labo ? ";
  cin>> labo;
  cout<<"\t Combien avez-vous d'heures de suivi ? ";
  cin>> suivi;
  cout<<endl;
}

/* affichage des heures de cours,labo,suivi qui sont déjà  */
/* déclarée dans la classe "class Enseignant:public Personne" */
void Enseignant::affiche(){
  cout<<endl;
  cout<<"Madame/Monsieur " <<nom<< ". Vous etes professeur de '"<<matiere<< "'"<<endl;
  cout<<"\t Vous effectuez :"<<nbHeuresCours<<" heures de cours"<<endl;
  cout<<"\t\t\t: "<<labo<<" heures pour le labo"<<endl;
  cout<<"\t\t\t: "<<suivi<<" pour les heures de suivi"<<endl;
  cout<<"\t NOmbre d'heures total est "<<nbHeuresCours+labo+suivi<<""<<endl;
  cout<<"\t Salaire:  "<<(42.5*nbHeuresCours) + (labo*0.5*42.5) + (suivi*0.75*42.50)<<" euros"<<endl;
  /* calcul salaire = 42,50*nbheurescours + labo*0.5*42,50 + suivi*0.75*42,50 */
  /* puisque labo a un coef 0.5 et suivi 0.75 de coefficient */

}
