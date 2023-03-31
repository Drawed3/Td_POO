#ifndef DEF_VECTEUR
#define DEF_VECTEUR

#include <string>

class Vecteur
{
public:
    // Constructeurs
    Vecteur();
    Vecteur(int dim);
    Vecteur(int dim, float composantes);
    ~Vecteur(); // Destructeur

    // Méthodes (fonctions)
    void AfficheVecteur();
    void ComposerVecteur();

    // Surcharge des opérateurs
    float &operator[](int indice);
    float operator[](int indice) const;
    Vecteur &operator=(const Vecteur &V); // Surcharge de l'opérateur d'affectation : nomclasse &operator=(const nomclasse &variable));
    Vecteur &operator+=(const Vecteur &V); // Surcharge de l'opérateur d'affectation : nomclasse &operator+=(const nomclasse &variable));
    


private:
    // Attributs
    int m_dim;
    float *m_composantes;
};

#endif