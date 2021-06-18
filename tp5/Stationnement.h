#pragma once
//Les types de stationnement (Prive,Resident et Service de stationnment)
enum StationnementType {
    ST_Resident, ST_Prive, ST_ServiceStationnement
};
//class parent des stationnments
class Stationnement {
public:
    virtual void printVehicle() = 0;
    static Stationnement* Create(StationnementType type);
};

