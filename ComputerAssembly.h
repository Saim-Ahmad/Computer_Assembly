#pragma once
#include "Computer.h"
#include "GraphicsCard.h"
#include "MainMemory.h"
#include "MotherBoard.h"
#include "NetworkCard.h"
#include "PhysicalMemory.h"
#include "PowerSupply.h"
#include "StorageDevice.h"
#include "Case.h"

class ComputerAssembly {
protected:
    Computer computer;
    GraphicsCard graphicsCard;
    NetworkCard networkCard;
    PowerSupply powerSupply;
    StorageDevice storageDevice;
    Case computerCase;
    double totalPrice;

public:
    //constructors
  //  ComputerAssembly();
    ComputerAssembly( Computer& comp,  GraphicsCard& gfx,  NetworkCard& net,  PowerSupply& ps,  StorageDevice& sd, 
         Case& cc, double price);
    Computer getComputer();
    //getters setters

    GraphicsCard getGraphicsCard();
    NetworkCard getNetworkCard();
    PowerSupply getPowerSupply();
    StorageDevice getStorageDevice();
    Case getCase();
    double getTotalPrice();
    void setComputer( Computer& comp);
    void setGraphicsCard( GraphicsCard& gfx);
    void setNetworkCard( NetworkCard& net);
    void setPowerSupply( PowerSupply& ps);
    void setStorageDevice( StorageDevice& sd);
    void setCase( Case& cc);
    void setTotalPrice(double price);
};