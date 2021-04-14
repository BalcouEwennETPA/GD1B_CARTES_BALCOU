#ifndef DEF_MONSTRE
#define DEF_MONSTRE

#include <iostream>
#include <string>
 
class Monstre
{
    public:
 
    Monstre();
    void Affichage();
    void Attaque(Monstre &cible);
    void recevoirDamage(int nbDegats);
    int getDamage() const;
    Monstre(std::string nom, int pv, int degats, bool etat);
 
    private:
 
    std::string name;
    int hp;
    int att;
    bool currentState;
};
 
#endif