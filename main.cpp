#include <iostream>
#include "Vecteur.hpp"
using namespace std;

int main()
{
    Vecteur V1;         // Vecteur vide
    Vecteur V2(3);      // Vecteur de dimension 3
    Vecteur V3(5, 1.2); // Vecteur de dim 5 avec 1.2
    Vecteur V4(5);
    float f;
    cout << "On essaye de remplir un vecteur de dimension 5 contenant des éléments" << endl;
    V3.ComposerVecteur();
    cout << "Nouveau vecteur 3:" << endl;
    V3.AfficheVecteur();
    V3[3] = 12.1;
    cout << "Vecteur 3 après surchage de l'assignation : " << endl;
    V3.AfficheVecteur();
    f = V3[3];
    cout << "Element 3 du vecteur 3: " << f << endl;
    V4 = V3;
    cout << "V4=V3 : " << endl;
    cout<< "Nouveau vecteur V4"<<endl;
    V4.AfficheVecteur();
    V4+=V3;
    cout << "V4+=V3 : " << endl;
    cout<< "Nouveau vecteur V4"<<endl;
    V4.AfficheVecteur();
    return 0;
}