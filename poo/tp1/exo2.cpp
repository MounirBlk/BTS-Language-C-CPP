#include <iostream>

using namespace std;

/*Déclaration de la classe*/
class Point{
  
private:
  int x,y;
  
public:
  Point(int a, int b);
  Point();
  void deplace(int abs, int ord);
  void affiche();
 
};

/*Programme principal*/
int main(void){
  
  Point A;
  A.affiche();
  A.deplace(5,4);
  A.affiche();
  
  Point B(17,77);
  B.affiche();
  
  return EXIT_SUCCESS;
}

/*Définition des méthodes*/

/*Constructeur par default*/
Point::Point(int a,int b){
  x = 20;
  y = 50;
}

/*2eme constucteur*/
Point::Point(){
  cout<<"Entrez l'abscisse du point :";
  cin>>x;
  cout<<"Entrez l'ordonnée du point :";
  cin>>y;
}


void Point::deplace(int dx,int dy){
  x = x+dx;
  y = y+dy;
}

void Point::affiche( ){
  cout<<"Le point est: ["<< x <<","<< y <<"]"<<endl;
  
}
