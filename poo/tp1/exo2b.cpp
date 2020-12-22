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
  Point B(1,0);
  B.affiche();
 
  
  return EXIT_SUCCESS;
}

/*Définition des méthodes*/

Point::Point(){
  cout<<"Entrez l'abscisse du point :";
  cin>>x;
  cout<<"Entrez l'ordonnée du point :";
  cin>>y;
}

Point::Point(int a,int b){
  x = a;
  y = b;
}

void Point::deplace(int dx,int dy){
  x = x+dx;
  y = y+dy;
}

void Point::affiche(){
  cout<<"Le point est: ["<< x <<" ,"<< y <<"]"<<endl;
  
}
