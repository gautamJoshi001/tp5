#include <iostream> 
#include"stationnementPrive.h"
#include "stationnnementResident.h"
#include "stationnementServiceStationnement.h"
#include "compteFournisseurStationnement.h"
using namespace std;
//source : https://iq.opengenus.org/factory-pattern-cpp/

// Driver program 
int main() {
    ///Le client a trois choix pour le type de Stationnment (ST_Prive, ST_Public, ST_serviceStationnement)
    CompteFournisseurStationnment* pClient = new CompteFournisseurStationnment(ST_ServiceStationnement);
    Stationnement* pStationnement = pClient->getStationnement();
    pStationnement->printVehicle();
    return 0;
}