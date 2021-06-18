#include "StationnementPrive.h"
#include "Stationnement.h"
#include "stationnementServiceStationnement.h"
#include "stationnnementResident.h"
//methode qui permet de construir le bon type de stationnment selon le type demander par le client
Stationnement* Stationnement::Create(StationnementType type) {
    if (type == ST_Resident)
        return new StationnementResident();
    else if (type == ST_Prive)
        return new StationnementPrive();
    else if (type == ST_ServiceStationnement)
        return new StationnementServiceStationnement();
    else return NULL;
}
