#include "compteFournisseurStationnement.h"
#include "Stationnement.h"
#include <iostream>
CompteFournisseurStationnment::CompteFournisseurStationnment(StationnementType type)
{
	pStationnement = Stationnement::Create(type);
}

CompteFournisseurStationnment::~CompteFournisseurStationnment()
{
	 if (pStationnement) {
			delete[] pStationnement;
			pStationnement = NULL;
		}
}

Stationnement* CompteFournisseurStationnment::getStationnement()
{
	return pStationnement;
}





