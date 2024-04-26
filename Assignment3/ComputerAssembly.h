#pragma once
#include "MotherBoard.h"
#include "PhysicalMemory.h"
#include "CPU.h"
#include "Case.h"
#include "Battery.h"
#include "GraphicsCard.h"
#include "StorageDevice.h"
#include "NetworkCard.h"
#include "PowerSupply.h"

class ComputerAssembly
{
protected:
    MainMemory* pm;
    MotherBoard* mb;
    CPU* cpu;
    GraphicsCard* gpu;
    StorageDevice* storage;
    NetworkCard* networkCard;
    PowerSupply* powerSupply;
    Battery* battery;
    Case* casing;
    double totalPrice;

public:
    ComputerAssembly();
    ComputerAssembly(MainMemory* p, MotherBoard* m, CPU* cp, GraphicsCard* g, StorageDevice* sd, NetworkCard* nc,
        PowerSupply* ps, Battery* b, Case* c, double price);
    ~ComputerAssembly();

    MainMemory* getMainMemory();
    MotherBoard* getMotherBoard();
    CPU* getCPU();
    GraphicsCard* getGraphicsCard();
    StorageDevice* getStorageDevice();
    NetworkCard* getNetworkCard();
    PowerSupply* getPowerSupply();
    Battery* getBattery();
    Case* getCase();
    double getTotalPrice();

    void setMainMemory(MainMemory* p);
    void setMotherBoard(MotherBoard* m);
    void setCPU(CPU* c);
    void setGraphicsCard(GraphicsCard* g);
    void setStorageDevice(StorageDevice* s);
    void setNetworkCard(NetworkCard* n);
    void setPowerSupply(PowerSupply* ps);
    void setBattery(Battery* b);
    void setCase(Case* ca);
    void setTotalPrice(double price);

    void inputDataFromUser();
    double gettotalprice(double gpu, double storagedevice, double network, double supply, double pccase);
    void outputAssembly(ComputerAssembly& assembly);

    ComputerAssembly& operator=(ComputerAssembly& other);
};
