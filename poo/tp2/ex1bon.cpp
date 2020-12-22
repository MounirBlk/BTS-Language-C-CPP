#include <iostream>
#include<stdlib.h>

using namespace std;

void menu();
void menuR();
void menuT();
class Triangle{
  /*attributs*/
private:
  unsigned int base;
  unsigned int hauteur;
public:
  Triangle();
  ~Triangle();
  unsigned int perimetre();
  unsigned int surface();
  unsigned int getBase();
  unsigned int getHauteur();
  void setHauteur();
  void setBase();
  int menuT();
  void isole();
  void carre();
};
/*Déclaration de la classe Rectangle*/
class Rectangle{
  /*attributs*/  
private:
  unsigned int largeur;
  unsigned int hauteur;
  /*Méthodes*/
public:
  Rectangle();
  ~Rectangle();
  unsigned int getLargeur();
  unsigned int getHauteur();
  unsigned int perimetre();
  unsigned int surface();
  void setHauteur();
  void setLargeur();
  void affichagePlein();
  void affichageVide();
  int menuR();
};

/*Programme principal*/
int main (void){
  int choice;
  int choix;
  Rectangle A;
  Triangle B;
  unsigned int value;  
  menu();
  cout<<"--------------------"<<endl;
  cout<<"|Entrez un choix:   |"<<endl;
  cout<<"--------------------"<<endl;
  cin>>choice;
  switch(choice){
  case 1 :
    while(1){
      menuT();
      cout<<"--------------------"<<endl;
      cout<<"|Entrez un choix:   |"<<endl;
      cout<<"--------------------"<<endl;
      cin>>choix;
      switch(choix){
      case 1:
	B.setBase();
	cout<<endl<<"La nouvelle largeur vaut :"<<B.getBase()<<endl;
	break;
      case 2:
	B.setHauteur();
	cout<<endl<<"La nouvelle hauteur vaut :"<<B.getHauteur()<<endl;
	break; 
      case 3:
	cout<<endl<<"La largeur du triangle vaut: "<<B.getBase()<<endl;
	break; 
      case 4:
	cout<<endl<<"La hauteur du triangle vaut: "<<B.getHauteur()<<endl;
	break; 
      case 5:
	cout<<endl<<"Le périmètre du triangle vaut:"<<B.perimetre()<<endl;
	break; 
      case 6:
	cout<<endl<<"La surface du triangle vaut: "<<B.surface()<<endl;
	break;


      case 7:
	B.isole();

	break;
      case 8:
	B.carre();

	
	break;
      case 9:
	return 0;
      }
    }
    break;
    
    
  case 2 :
    while(1){
      menuR();
      cout<<"--------------------"<<endl;
      cout<<"|Entrez un choix:   |"<<endl;
      cout<<"--------------------"<<endl;
      cin>>choix;
      switch(choix){
      case 1:
	A.setLargeur();
	cout<<endl<<"La nouvelle largeur vaut :"<<A.getLargeur()<<endl;
	break;
      case 2:
	A.setHauteur();
	cout<<endl<<"La nouvelle hauteur vaut :"<<A.getHauteur()<<endl;
	break; 
      case 3:
	cout<<endl<<"La largeur du rectangle vaut: "<<A.getLargeur()<<endl;
	break; 
      case 4:
	cout<<endl<<"La hauteur du rectangle vaut: "<<A.getHauteur()<<endl;
	break; 
      case 5:
	cout<<endl<<"Le périmètre du rectangle vaut:" <<A.perimetre()<<endl;
	break; 
      case 6:
	cout<<endl<<"La surface du rectangle vaut: "<<A.surface()<<endl;
	break; 
      case 7:
	cout<<endl<<"Voici le rectangle plein: "<<endl;
	A.affichagePlein();
	break; 
      case 8:
	cout<<endl<<"Voici le rectangle vide"<<endl;
	A.affichageVide();
	break;
      
      case 9:
	return 0;
      }
    }
    break;
  }
}
/*Définition des méthodes de la classe Triangle*/
/*Méthode modification de la base*/
void Triangle::setBase(){
  cout<<"donner une nouvelle base: ";
  cin>>base;
}
/*Définition méthode modification de la hauteur*/
void Triangle::setHauteur(){
  cout<<"donner une nouvelle hauteur: ";
  cin>>hauteur;
}
/*Définition méthode affichage de la base*/
unsigned int Triangle::getBase(){
  return base;
}
/*Définition méthode affichage de la hauteur*/
unsigned int Triangle::getHauteur(){
  return hauteur;
}
/*Définition méthode calcul du périmètre*/
unsigned int Triangle::perimetre(){
  int perimetre;
  perimetre=base*2 + hauteur*2;
  return perimetre;
}
/*Définition méthode calcul de la surface*/
unsigned int Triangle::surface(){
  int surface;
  surface=base * hauteur;
  return surface;
}

void Triangle::isole(){

}

void Triangle::carre(){
  
}



Triangle::~Triangle(){ 

}
/*Définition méthode saisie largeur et hauteur du triangle*/
Triangle::Triangle(){

  cout<<"Entrer la base du triangle : "<<endl;

  cin>>base;

  cout<<"Entrer la hauteur du triangle : "<<endl;

  cin>>hauteur;
} 
/*Définition des méthodes de la classe Rectangle*/
/*Méthode modification de la largeur*/
void Rectangle::setLargeur(){
  cout<<"donner une nouvelle largeur: ";
  cin>>largeur;
}
/*Définition méthode modification de la hauteur*/
void Rectangle::setHauteur(){
  cout<<"donner une nouvelle hauteur: ";
  cin>>hauteur;
}
/*Définition méthode affichage de la largeur*/
unsigned int Rectangle::getLargeur(){
  return largeur;
}
/*Définition méthode affichage de la hauteur*/
unsigned int Rectangle::getHauteur(){
  return hauteur;
}
/*Définition méthode calcul du périmètre*/
unsigned int Rectangle::perimetre(){
  int perimetre;
  perimetre=largeur*2 + hauteur*2;
  return perimetre;
}
/*Définition méthode calcul de la surface*/
unsigned int Rectangle::surface(){
  int surface;
  surface=largeur * hauteur;
  return surface;
}
Rectangle::~Rectangle(){ 

}
/*Définition méthode saisie largeur et hauteur du rectangle*/
Rectangle::Rectangle(){

  cout<<"Entrer la largeur du rectangle: "<<endl;
  cin>>largeur;

  cout<<"Entrer la hauteur du rectangle:"<<endl;

  cin>>hauteur;
} 
void Rectangle::affichagePlein(){
  int i;
  int j;
  for(i=1;i<=getHauteur();i++){
    for(j=1;j<=getLargeur();j++){
      cout << "*";
    }
    cout << endl;
  }
}
void Rectangle::affichageVide(){
  int i;
  int j;
  for(i=1;i<=getLargeur();i++){
    cout << "*";
  }
  cout << endl;
  for(i=3;i<=getHauteur();i++){
    cout << "*";
    for(j=3;j<=getLargeur();j++){
      cout << " ";
    }
    cout << "*";
    cout << endl;
  }
  for(i=1;i<=getLargeur();i++){
    cout << "*";
  }
  cout << endl;
}
  
void menuR(){
  cout<<"----------------------------------------------"<<endl;
  cout<<"| \t Les différentes options possibles:   |"<<endl;
  cout<<"| \t 1- Modifier la largeur               |"<<endl;
  cout<<"| \t 2- Modifier la hauteur               |"<<endl;
  cout<<"| \t 3- Afficher la largeur               |"<<endl;
  cout<<"| \t 4- Afficher la hauteur               |"<<endl;
  cout<<"| \t 5- Afficher le périmètre du rectangle|"<<endl;
  cout<<"| \t 6- Afficher la surface du rectangle  |"<<endl;
  cout<<"| \t 7- Afficher le rectangle plein       |"<<endl;
  cout<<"| \t 8- Afficher le rectangle vide        |"<<endl;
  cout<<"| \t 9- Quitter                           |"<<endl;
  cout<<"----------------------------------------------"<<endl;
    
}

void menuT(){
  cout<<"-----------------------------------------------"<<endl;
  cout<<"| \t Les différentes options possibles:   |"<<endl;
  cout<<"| \t 1- Modifier la base                  |"<<endl;
  cout<<"| \t 2- Modifier la hauteur               |"<<endl;
  cout<<"| \t 3- Afficher la base                  |"<<endl;
  cout<<"| \t 4- Afficher la hauteur               |"<<endl;
  cout<<"| \t 5- Afficher le périmètre du triangle |"<<endl;
  cout<<"| \t 6- Afficher la surface du triangle   |"<<endl;
  cout<<"| \t 7- Afficher un triangle isole        |"<<endl;
  cout<<"| \t 8- Afficher un triangle carre        |"<<endl;
  cout<<"| \t 9- Quitter                           |"<<endl;
  cout<<"-----------------------------------------------"<<endl;
}

void menu(){

  cout<<"\t Selectionnez la forme  géométrique"<<endl;
  cout<<"\t 1- Triangle"<<endl;
  cout<<"\t 2- Rectangle"<<endl;
  cout<<"\t 3- Quitter"<<endl;

}
