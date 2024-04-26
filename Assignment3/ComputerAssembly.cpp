#include "ComputerAssembly.h"
#include<iostream>
#include<string>
#include "Computer.h"
using std::cin;
using std::cout;

ComputerAssembly::ComputerAssembly() : pm(nullptr), mb(nullptr), cpu(nullptr), gpu(nullptr), storage(nullptr),
networkCard(nullptr), powerSupply(nullptr), battery(nullptr), casing(nullptr), totalPrice(0.0)
{
}

ComputerAssembly::ComputerAssembly(MainMemory* p, MotherBoard* m, CPU* cp, GraphicsCard* g, StorageDevice* sd,
    NetworkCard* nc, PowerSupply* ps, Battery* b, Case* c, double price)
    : pm(p), mb(m), cpu(cp), gpu(g), storage(sd),
    networkCard(nc), powerSupply(ps), battery(b), casing(c), totalPrice(price)
{
}

ComputerAssembly::~ComputerAssembly()
{
}

MainMemory* ComputerAssembly::getMainMemory()
{
    return pm;
}

MotherBoard* ComputerAssembly::getMotherBoard()
{
    return mb;
}

CPU* ComputerAssembly::getCPU()
{
    return cpu;
}

GraphicsCard* ComputerAssembly::getGraphicsCard()
{
    return gpu;
}

StorageDevice* ComputerAssembly::getStorageDevice()
{
    return storage;
}

NetworkCard* ComputerAssembly::getNetworkCard()
{
    return networkCard;
}

PowerSupply* ComputerAssembly::getPowerSupply()
{
    return powerSupply;
}

Battery* ComputerAssembly::getBattery()
{
    return battery;
}

Case* ComputerAssembly::getCase()
{
    return casing;
}

double ComputerAssembly::getTotalPrice()
{
    return totalPrice;
}

void ComputerAssembly::setMainMemory(MainMemory* p)
{
    pm = p;
}

void ComputerAssembly::setMotherBoard(MotherBoard* m)
{
    mb = m;
}

void ComputerAssembly::setCPU(CPU* c)
{
    cpu = c;
}

void ComputerAssembly::setGraphicsCard(GraphicsCard* g)
{
    gpu = g;
}

void ComputerAssembly::setStorageDevice(StorageDevice* s)
{
    storage = s;
}

void ComputerAssembly::setNetworkCard(NetworkCard* n)
{
    networkCard = n;
}

void ComputerAssembly::setPowerSupply(PowerSupply* ps)
{
    powerSupply = ps;
}

void ComputerAssembly::setBattery(Battery* b)
{
    battery = b;
}

void ComputerAssembly::setCase(Case* ca)
{
    casing = ca;
}

void ComputerAssembly::setTotalPrice(double price)
{
    totalPrice = price;
}

ComputerAssembly& ComputerAssembly::operator=(ComputerAssembly& other)
{
    if (this != &other)
    {
        pm = other.pm;
        mb = other.mb;
        cpu = other.cpu;
        gpu = other.gpu;
        storage = other.storage;
        networkCard = other.networkCard;
        powerSupply = other.powerSupply;
        battery = other.battery;
        casing = other.casing;
        totalPrice = other.totalPrice;
    }
    return *this;
}
 double ComputerAssembly::gettotalprice(double gpu, double storagedevice, double network, double supply, double pccase)
    {
        return (gpu + storagedevice + network + supply + pccase);
    }

 void ComputerAssembly::outputAssembly(ComputerAssembly& assembly)
 {
     cout << "Computer Assembly Details:" << endl;
     cout << "--------------------------" << endl;
     cout << "Physical Memory Capacity: " << assembly.getMainMemory()->getcapacity() << " GB" << endl;
     cout << "Motherboard Number of Ports: " << assembly.getMotherBoard()->getnum() << endl;
     cout << "CPU Brand: " << assembly.getCPU()->getBrand() << endl;
     cout << "CPU Architecture: " << assembly.getCPU()->getArchitecture() << endl;
     cout << "GPU Brand: " << assembly.getGraphicsCard()->getbrand() << endl;
     cout << "GPU Memory Size: " << assembly.getGraphicsCard()->getsize() << " GB" << endl;
     cout << "Storage Device Type: " << assembly.getStorageDevice()->getdevice() << endl;
     cout << "Storage Device Capacity: " << assembly.getStorageDevice()->getcapacity() << " GB" << endl;
     cout << "Network Card Type: " << assembly.getNetworkCard()->getbrand() << endl;
     cout << "Network Card Speed: " << assembly.getNetworkCard()->getspeed() << " Mbps" << endl;
     cout << "Power Supply Wattage: " << assembly.getPowerSupply()->getwattage() << " W" << endl;
     cout << "Battery Capacity: " << assembly.getBattery()->getcapacity() << " mAh" << endl;
     cout << "Case Form Factor: " << assembly.getCase()->getff() << endl;
     cout << "Case Color: " << assembly.getCase()->getcolor() << endl;
     cout << "Total Price: $" << assembly.getTotalPrice() << endl;

 }



void ComputerAssembly::inputDataFromUser()
{
    //cout << "Enter the type of computer: 1 for PC / 2 for laptop / 3 for tablet: ";
    //int computerType;
    //cin >> computerType;
    //if (cin.fail() || (computerType != 1 && computerType != 2 && computerType != 3))
    //{
    //    cerr << "Invalid input for the type of computer. Please enter either 1 or 2 or 3." << endl;
    //    cin.clear();
    //    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    //    inputDataFromUser();
    //    return;
    //}
    //cout << "Enter CPU ALU Number of Adders: ";
    //int adders;
    //cin >> adders;
    //if (cin.fail())
    //{
    //    cerr << "Invalid input for Number of Adders. Please enter an integer." << endl;
    //    cin.clear();
    //    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    //    inputDataFromUser();
    //    return;
    //}
    //cout << "Enter CPU ALU Number of Subtractors: ";
    //int subtractors;
    //cin >> subtractors;
    //if (cin.fail())
    //{
    //    cerr << "Invalid input for Number of Subtractors. Please enter an integer." << endl;
    //    cin.clear();
    //    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    //    inputDataFromUser();
    //    return;
    //}
    //cout << "Enter CPU ALU Number of Registers: ";
    //int registers;
    //cin >> registers;
    //if (cin.fail())
    //{
    //    cerr << "Invalid input for Number of registers. Please enter an integer." << endl;
    //    cin.clear();
    //    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    //    inputDataFromUser();
    //    return;
    //}
    //cout << "Enter CPU ALU size of registers: (in bytes) ";
    //int sizeofRegisters;
    //cin >> sizeofRegisters;
    //if (cin.fail())
    //{
    //    cerr << "Invalid input for size of Registers. Please enter an integer." << endl;
    //    cin.clear();
    //    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    //    inputDataFromUser();
    //    return;
    //}
    //cout << "Enter CPU Control Unit Clock (GHz): ";
    //float clock;
    //cin >> clock;
    //if (cin.fail())
    //{
    //    cerr << "Invalid input for Control Unit Clock. Please enter a float." << endl;
    //    cin.clear();
    //    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    //    inputDataFromUser();
    //    return;
    //}
    //ALU* alu = new ALU(adders, subtractors, registers, sizeofRegisters);
    //ControlUnit* cu = new ControlUnit(clock);
    //string cpuBrand;
    //cout << "Enter CPU Brand (1 for Intel/2 for AMD/3 for Apple): ";
    //int cpubrandchoice;
    //cin >> cpubrandchoice;
    //if (cin.fail() || (cpubrandchoice != 1 && cpubrandchoice != 2 && cpubrandchoice != 3))
    //{
    //    cerr << "Invalid input for the type of computer. Please enter either 1 or 2." << endl;
    //    cin.clear();
    //    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    //    inputDataFromUser();
    //    return;
    //}
    //switch (cpubrandchoice)
    //{
    //case 1:
    //    cpuBrand = "Intel";
    //    break;
    //case 2:
    //    cpuBrand = "AMD";
    //    break;
    //case 3:
    //    cpuBrand = "Apple";
    //    break;
    //}
    //cout << "Enter CPU Architecture (x86/ARM64): ";
    //string cpuArchitecture;
    //cin >> cpuArchitecture;
    //int gpuMemorySize = 0;
    //string gpuBrandA;
    //switch (cpubrandchoice)
    //{
    //case 1:
    //    cpu = CPU(alu, cu, cpuBrand, cpuArchitecture);
    //    break;
    //case 2:
    //    cpu = CPU(alu, cu, cpuBrand, cpuArchitecture);
    //    break;
    //case 3:
    //    gpuBrandA= "AppleGPU";
    //    cout << "Enter Integrated GPU Memory Size (in GB): ";
    //    cin >> gpuMemorySize;
    //    cpu = CPU(alu, cu, cpuBrand, cpuArchitecture, gpuBrandA, gpuMemorySize);
    //    break;
    //default:
    //    cerr << "Invalid CPU Brand. Supported brands are Intel, AMD, and Apple." << endl;
    //    inputDataFromUser();
    //}
    //cout << "Enter Main Memory Capacity (in GB): ";
    //int mmCapacity;
    //cin >> mmCapacity;
    //if (cin.fail()) {
    //    cerr << "Invalid input for Main Memory Capacity. Please enter an integer." << endl;
    //    cin.clear();
    //    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    //    inputDataFromUser();
    //    return;
    //}
    //cout << "Enter Main Memory Technology Type 1 for Semiconductor/2 for Silicon): ";
    //int mmnumber = 0;
    //cin >> mmnumber;
    //string techType;
    //switch (mmnumber)
    //{
    //case 1:
    //    techType = "Semiconductor";
    //    break;
    //case 2:
    //    techType = "Silicon";
    //    break;
    //default:
    //    inputDataFromUser();
    //}
    //cout << "Enter Motherboard Number of Ports: ";
    //int numPorts;
    //cin >> numPorts;
    //if (cin.fail())
    //{
    //    cerr << "Invalid input for Number of Ports. Please enter an integer." << endl;
    //    cin.clear();
    //    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    //    inputDataFromUser();
    //    return;
    //}
    //string portname = "";
    //int baudrate = 0;
    //int* port = new int[numPorts];
    //for (int i = 0;i < numPorts;i++)
    //{
    //    cout << "enter the type of port " << i + 1 << "  ";
    //    cin >> portname;
    //    cout << "enter the baud rate of port " << i + 1 << "  ";
    //    cin >> baudrate;
    //    if (cin.fail())
    //    {
    //        cerr << "Invalid input for Port " << i + 1 << " Baud Rate. Please enter an integer." << endl;
    //        cin.clear();
    //        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    //        inputDataFromUser();
    //        return;
    //    }
    //}
    //float gpuPrice;
    //string gpuBrand;
    //if (cpubrandchoice == 1 || cpubrandchoice == 2)
    //{
    //    cout << "Enter Graphics Card Brand: ";
    //    cin >> gpuBrand;
    //    cout << "Enter Graphics Card Memory Size (in GB): ";
    //    int gpuMemorySize;
    //    cin >> gpuMemorySize;
    //    cout << "Enter Graphics Card price: ";
    //    cin >> gpuPrice;
    //    if (cin.fail())
    //    {
    //        cerr << "Invalid input for Graphics Card price. Please enter a float." << endl;
    //        cin.clear();
    //        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    //        inputDataFromUser();
    //        return;
    //    }
    //}
    //cout << "Enter storage device Type 1 for Consumer HDD/2 for NAS HDD/3 for SSD): ";
    //int sdnumber = 0;
    //cin >> sdnumber;
    //string sdtype;
    //switch (sdnumber)
    //{
    //case 1:
    //    sdtype = "Consumer HDD";
    //    break;
    //case 2:
    //    sdtype = "NAS HDD";
    //    break;
    //case 3:
    //    sdtype = "SSD";
    //    break;
    //default:
    //    cerr << "Invalid input for type, input from 1,2 3 ." << endl;
    //    cin.clear();
    //    inputDataFromUser();
    //}
    //cout << "Enter Storage Device Capacity (in GB): ";
    //int storageCapacity;
    //cin >> storageCapacity;
    //if (cin.fail())
    //{
    //    cerr << "Invalid input for Storage Device Capacity. Please enter an integer." << endl;
    //    cin.clear();
    //    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    //    inputDataFromUser();
    //    return;
    //}
    //cout << "Enter Storage Device price";
    //double sdprice;
    //cin >> sdprice;
    //if (cin.fail()) 
    //{
    //    cerr << "Invalid input for Storage Device price. Please enter a double." << endl;
    //    cin.clear();
    //    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    //    inputDataFromUser();
    //    return;
    //}
    //cout << "Enter Network Card Type: ";
    //string networkType;
    //cin >> networkType;

    //cout << "Enter Network Card Speed (in Mbps): ";
    //int networkSpeed;
    //cin >> networkSpeed;
    //if (cin.fail()) 
    //{
    //    cerr << "Invalid input for Network Card Speed. Please enter an integer." << endl;
    //    cin.clear();
    //    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    //    inputDataFromUser();
    //    return;
    //}
    //cout << "Enter Network Card price: ";
    //double networkprice;
    //cin >> networkprice;
    //if (cin.fail()) 
    //{
    //    cerr << "Invalid input for Network Card price. Please enter a double." << endl;
    //    cin.clear();
    //    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    //    inputDataFromUser();
    //    return;
    //}

    //cout << "Enter Power Supply Wattage (in W): ";
    //int psWattage;
    //cin >> psWattage;
    //if (cin.fail()) 
    //{
    //    cerr << "Invalid input for Power Supply Wattage. Please enter an integer." << endl;
    //    cin.clear();
    //    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    //    inputDataFromUser();
    //    return;
    //}
    //cout << "Enter power supply price: ";
    //double supplyprice;
    //cin >> supplyprice;
    //if (cin.fail())
    //{
    //    cerr << "Invalid input for supply price. Please enter a double." << endl;
    //    cin.clear();
    //    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    //    inputDataFromUser();
    //    return;
    //}

    //cout << "Enter Power Supply Efficiency Rating: ";
    //string psRating;
    //cin >> psRating;
    //if (cin.fail())
    //{
    //    cerr << "Invalid input for supply efficiency. Please enter a string." << endl;
    //    cin.clear();
    //    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    //    inputDataFromUser();
    //    return;
    //}

    //cout << "Enter Battery Capacity (in mAh): ";
    //int batteryCapacity;
    //cin >> batteryCapacity;
    //if (cin.fail()) 
    //{
    //    cerr << "Invalid input for Battery Capacity. Please enter an integer." << endl;
    //    cin.clear();
    //    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    //    inputDataFromUser();
    //    return;
    //}

    //cout << "Enter Case Form Factor: ";
    //string caseFormFactor;
    //cin >> caseFormFactor;
    //double caseprice = 0.0;
    //cout << "Enter Case Color: ";
    //string caseColor;
    //cin >> caseColor;
    //if (computerType == 1)
    //{
    //    cout << "enter the price of casing: ";
    //    cin >> caseprice;        
    //}
    //MainMemory* mm = new MainMemory(mmCapacity, techType);
    ////MainMemory* mmptr = &mm;
    //MotherBoard mb(mm, numPorts);
    //GraphicsCard gpu(gpuBrand, gpuMemorySize, gpuPrice); 
    //StorageDevice storage(sdtype, storageCapacity, sdprice); 
    //NetworkCard networkCard(networkType, networkSpeed, networkprice); 
    //PowerSupply ps(psRating, psWattage, supplyprice); 
    //Battery bat(batteryCapacity);
    //Case ca(caseFormFactor, caseColor, caseprice); 
    //ComputerAssembly Computer(pm, mb, cpu, gpu, storage, networkCard, ps, bat, ca, totalPrice);
    
 }

 


