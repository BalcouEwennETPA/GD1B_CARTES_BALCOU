#include "monstre.h"

using namespace std;

Monstre::Monstre() : name("Gobelin"), att(2), hp(3), currentState(true){

}

Monstre::Monstre(std::string nom, int pv, int degats, bool etat) : name(nom), hp(pv), att(degats), currentState(etat){

}

void Monstre::Affichage(){
    cout << name << " : Attaque = " << att << " HP = " << hp << endl;
    if (hp == 0){
        cout << name << " est mort " << endl ;
    }
}