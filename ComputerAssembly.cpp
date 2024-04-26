#include "Computer.h"
#include "GraphicsCard.h"
#include "MainMemory.h"
#include "MotherBoard.h"
#include "NetworkCard.h"
#include "PhysicalMemory.h"
#include "PowerSupply.h"
#include "StorageDevice.h"
#include "Case.h"
#include"ComputerAssembly.h"

 /*double ComputerAssembly::gettotalprice(double gpu, double storagedevice, double network, double supply, double pccase)
    {
        return (gpu + storagedevice + network + supply + pccase);
    }

 */



//ComputerAssembly::ComputerAssembly() 
//{
//    
//}

ComputerAssembly::ComputerAssembly(Computer& comp, GraphicsCard& gfx, NetworkCard& net, PowerSupply& ps, StorageDevice& sd, Case& cc,
    double price) : computer(comp), graphicsCard(gfx), networkCard(net), powerSupply(ps),storageDevice(sd), computerCase(cc), totalPrice(price)
{
}

Computer ComputerAssembly::getComputer()
{
    return computer;
}

GraphicsCard ComputerAssembly::getGraphicsCard()
{
    return graphicsCard;
}

NetworkCard ComputerAssembly::getNetworkCard()
{
    return networkCard;
}

PowerSupply ComputerAssembly::getPowerSupply()
{
    return powerSupply;
}

StorageDevice ComputerAssembly::getStorageDevice()
{
    return storageDevice;
}

Case ComputerAssembly::getCase()
{
    return computerCase;
}

double ComputerAssembly::getTotalPrice()
{
    return totalPrice;
}

void ComputerAssembly::setComputer(Computer& comp)
{
    //computer = comp;
}

void ComputerAssembly::setGraphicsCard(GraphicsCard& gfx)
{
    graphicsCard = gfx;
}

void ComputerAssembly::setNetworkCard(NetworkCard& net)
{
}

void ComputerAssembly::setPowerSupply(PowerSupply& ps)
{
}

void ComputerAssembly::setStorageDevice(StorageDevice& sd)
{
}

void ComputerAssembly::setCase(Case& cc)
{
}

void ComputerAssembly::setTotalPrice(double price)
{
}
