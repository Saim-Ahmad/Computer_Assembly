#include <iostream>
#include <limits>
#include <string>
#include "ComputerAssembly.h"
using std::cout;
using std::cin;

int computerType;
int adders;
int subtractors;
int registers;
int sizeofRegisters;
double clk;
string cpuBrand;
int cpubrandchoice;
string cpuArchitecture;
int gpuMemorySize;
int mmCapacity;
int mmnumber;
string techType;
int numPorts;
double gpuPrice;
string gpuBrand;
int sdnumber;
string sdtype;
int storageCapacity;
double sdprice;
string networkType;
int networkSpeed;
double networkprice;
int psWattage;
double supplyprice;
string psRating;
int batteryCapacity;
string caseFormFactor;
double caseprice;
string caseColor;
CPU* cpu;

int validateIntInput(const string& prompt) 
{
    int value;
    cout << prompt;
    cin >> value;
    if (cin.fail()) 
    {
        cerr << "Invalid input. Please enter an integer." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return validateIntInput(prompt);
    }
    return value;
}

double validatedoubleInput(const string& prompt) 
{
    double value;
    cout << prompt;
    cin >> value;
    if (cin.fail()) 
    {
        cerr << "Invalid input. Please enter a double." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return validatedoubleInput(prompt);
    }
    return value;
}

void inputDataFromUser() 
{
    computerType = validateIntInput("Enter the type of computer: 1 for PC / 2 for laptop / 3 for tablet: ");
    if (computerType != 1 && computerType != 2 && computerType != 3) 
    {
        cerr << "Invalid input for the type of computer. Please enter either 1, 2, or 3." << endl;
        inputDataFromUser();
        return;
    }
    adders = validateIntInput("Enter CPU ALU Number of Adders: ");
    subtractors = validateIntInput("Enter CPU ALU Number of Subtractors: ");
    registers = validateIntInput("Enter CPU ALU Number of Registers: ");
    sizeofRegisters = validateIntInput("Enter CPU ALU size of registers (in bytes): ");
    clk = validatedoubleInput("Enter CPU Control Unit clk (GHz): ");
    cpubrandchoice = validateIntInput("Enter CPU Brand (1 for Intel / 2 for AMD / 3 for Apple): ");
    switch (cpubrandchoice) 
    {
    case 1:
        cpuBrand = "Intel";
        break;
    case 2:
        cpuBrand = "AMD";
        break;
    case 3:
        cpuBrand = "Apple";
        break;
    default:
        cerr << "Invalid CPU Brand. Supported brands are Intel, AMD, and Apple." << endl;
        inputDataFromUser();
        return;
    }
    cout << "Enter CPU Architecture (x86/ARM64): ";
    cin >> cpuArchitecture;
    gpuMemorySize = 0;
    if (cpubrandchoice == 3) 
    {
        gpuMemorySize = validateIntInput("Enter Integrated GPU Memory Size (in GB): ");
    }
    mmCapacity = validateIntInput("Enter Main Memory Capacity (in GB): ");
    mmnumber = validateIntInput("Enter Main Memory Technology Type (1 for Semiconductor / 2 for Silicon): ");
    switch (mmnumber) 
    {
    case 1:
        techType = "Semiconductor";
        break;
    case 2:
        techType = "Silicon";
        break;
    default:
        inputDataFromUser();
        return;
    }
    numPorts = validateIntInput("Enter Motherboard Number of Ports: ");
    int* port = new int[numPorts];
    for (int i = 0; i < numPorts; i++) 
    {
        string portname;
        int baudrate;
        cout << "Enter the type of port " << i + 1 << ": ";
        cin >> portname;
        baudrate = validateIntInput("Enter the baud rate of port " + to_string(i + 1) + ": ");
    }
    gpuPrice = 0;
    if (cpubrandchoice == 1 || cpubrandchoice == 2) 
    {
        gpuBrand = validateIntInput("Enter Graphics Card Brand: ");
        int gpuMemorySize = validateIntInput("Enter Graphics Card Memory Size (in GB): ");
        gpuPrice = validatedoubleInput("Enter Graphics Card price: ");
    }
    sdnumber = validateIntInput("Enter storage device Type (1 for Consumer HDD / 2 for NAS HDD / 3 for SSD): ");
    switch (sdnumber) 
    {
    case 1:
        sdtype = "Consumer HDD";
        break;
    case 2:
        sdtype = "NAS HDD";
        break;
    case 3:
        sdtype = "SSD";
        break;
    default:
        cerr << "Invalid input for type. Please enter 1, 2, or 3." << endl;
        inputDataFromUser();
        return;
    }
    storageCapacity = validateIntInput("Enter Storage Device Capacity (in GB): ");
    sdprice = validatedoubleInput("Enter Storage Device price: ");
    cout << "Enter Network Card Type: ";
    cin >> networkType;
    networkSpeed = validateIntInput("Enter Network Card Speed (in Mbps): ");
    networkprice = validatedoubleInput("Enter Network Card price: ");
    psWattage = validateIntInput("Enter Power Supply Wattage (in W): ");
    supplyprice = validatedoubleInput("Enter power supply price: ");
    cout << "Enter Power Supply Efficiency Rating: ";
    cin >> psRating;
    batteryCapacity = validateIntInput("Enter Battery Capacity (in mAh): ");
    cout << "Enter Case Form Factor: ";
    cin >> caseFormFactor;
    caseprice = 0.0;
    cout << "Enter Case Color: ";
    cin >> caseColor;
    if (computerType == 1) 
    {
        caseprice = validatedoubleInput("Enter the price of casing: ");
    }
    cout << "the computer has been created successfully \n\n";
}

int main()
{
    inputDataFromUser();
    MainMemory* mm = new MainMemory(mmCapacity, techType);
    MotherBoard* mb = new MotherBoard(mm, numPorts);
    GraphicsCard* gpu = new GraphicsCard(gpuBrand, gpuMemorySize, gpuPrice);
    StorageDevice* storage = new StorageDevice(sdtype, storageCapacity, sdprice);
    NetworkCard* networkCard = new NetworkCard(networkType, networkSpeed, networkprice);
    PowerSupply* powerSupply = new PowerSupply(psRating, psWattage, supplyprice);
    Battery* battery = new Battery(batteryCapacity);
    Case* casing = new Case(caseFormFactor, caseColor, caseprice);
    double totalPrice = gpuPrice + sdprice + networkprice + supplyprice + caseprice;
    ComputerAssembly assembly(mm, mb, cpu, gpu, storage, networkCard, powerSupply, battery, casing, totalPrice);
    assembly.outputAssembly(assembly);
    
}