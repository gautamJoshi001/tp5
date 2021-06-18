#pragma once
#include "Stationnement.h"
class CompteFournisseurStationnment {
public:

    
    //le client ne construit pas l 'objet, plutot il passe le type 
    // a la methode Fabrique Create() dans la classe Stationnment.
    CompteFournisseurStationnment(StationnementType type);
    
    ~CompteFournisseurStationnment();
    Stationnement* getStationnement();
private:
    Stationnement* pStationnement;
};

