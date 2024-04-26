/*M. Saim Ahmad
* section B
* 23I-0781
* Sir Ali Zeeshan Ijaz
* muhammad Abdur Rafey
*/
#include <iostream>
#include <string>
#include "ComputerAssembly.h"
#include "Battery.h"
using namespace std;
//global variables
int computerType, adders, subtractors, registers, sizeofRegisters, gpubrandchoice, mmCapacity, mmnumber, numPorts, applegpusize, sdnumber, 
storageCapacity, cpubrandchoice, architecturechoice , gpuMemorySize, pmCapacity, psWattage, networkSpeed, batteryCapacity;
float clk;
double gpuPrice, sdprice, networkprice, supplyprice, caseprice;
string cpuBrand, cpuArchitecture, techType, gpuBrand, sdtype, networkType, psRating, caseFormFactor, caseColor, pmtype;
Port* port = nullptr;
//function to validate power of two
bool isPowerOfTwo(int x) 
{
    return (x > 0 && (x & (x - 1)) == 0);
}
//function to validate memory input
int validateMemoryInput(const string& prompt)
{
    int value;
    cout << prompt;
    cin >> value;
    if (cin.fail() || !isPowerOfTwo(value))
    {
        cerr << "Invalid input. Please enter an integer power of two." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return validateMemoryInput(prompt);
    }
    return value;
}
//function to validate float input
float validateFloatInput(const string& prompt)
{
    float value;
    cout << prompt;
    cin >> value;
    if (cin.fail()) 
    {
        cerr << "Invalid input. Please enter a float." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return validateFloatInput(prompt);
    }
    return value;
}
//function to validate integer input
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
//function to validate double input
double validateDoubleInput(const string& prompt) 
{
    double value;
    cout << prompt;
    cin >> value;
    if (cin.fail()) 
    {
        cerr << "Invalid input. Please enter a double." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return validateDoubleInput(prompt);
    }
    return value;
}
//function to input data
void inputDataFromUser() 
{
    cout << "Enter the type of computer:" << endl;
    cout << "1. PC" << endl;
    cout << "2. Laptop" << endl;
    cout << "3. Tablet" << endl;
    computerType = validateIntInput("Choice: ");
    switch (computerType) 
    {
    case 1:
        cout << "You selected PC." << endl;
        break;
    case 2:
        cout << "You selected Laptop." << endl;
        break;
    case 3:
        cout << "You selected Tablet." << endl;
        break;
    default:
        cerr << "Invalid choice. Please enter 1, 2, or 3." << endl;
        inputDataFromUser();
        return;
    }

    adders = validateIntInput("Enter CPU ALU Number of Adders: ");
    subtractors = validateIntInput("Enter CPU ALU Number of Subtractors: ");
    registers = validateIntInput("Enter CPU ALU Number of Registers: ");
    sizeofRegisters = validateIntInput("Enter CPU ALU size of registers (in bytes): ");
    clk = validateFloatInput("Enter CPU Control Unit clk (GHz): ");
    cout << "Enter CPU Brand (1 for Intel / 2 for AMD / 3 for Apple): ";
    cpubrandchoice = validateIntInput("Choice: ");
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
        applegpusize = validateIntInput("Enter the size of Apple GPU: ");
        break;
    default:
        cerr << "Invalid CPU Brand. Supported brands are Intel, AMD, and Apple." << endl;
        inputDataFromUser();
        return;
    }
    cout << "Enter CPU Architecture (1 for x86/2 for ARM64): ";
    architecturechoice = validateIntInput("Choice: ");
    switch (architecturechoice)
    {
    case 1:
        cpuArchitecture = "x86";
        break;
    case 2:
        cpuArchitecture = "ARM64";
        break;
    default:
        cerr << "Invalid CPU Architecture. Supported Architecture are x86, ARM64." << endl;
        inputDataFromUser();
        return;
    }
    gpuMemorySize = 0;
    if (cpubrandchoice == 3) 
    {
        gpuMemorySize = validateMemoryInput("Enter Integrated GPU Memory Size (in GB): ");
    }
    mmCapacity = validateMemoryInput("Enter Main Memory Capacity (in GB): ");
    cout << "Enter Main Memory Technology Type (1 for Semiconductor / 2 for Silicon): ";
    mmnumber = validateIntInput("Choice: ");
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
    port = new Port[numPorts];
    for (int i = 0; i < numPorts; i++)
    {
        string portname;
        int baudrate;
        cout << "Enter the type of port " << i + 1 << ": ";
        cin >> portname;
        baudrate = validateIntInput("Enter the baud rate of port " + to_string(i + 1) + ": ");
        port[i] = Port(baudrate, portname);
    }
    pmtype = (cpuBrand == "Apple") ? "LPDDR4/5" : "DDR4/5";
    pmCapacity = validateIntInput("Enter the physical memory capacity: ");
    gpuPrice = 0;
    if (cpubrandchoice == 1 || cpubrandchoice == 2)
    {
        cout << "Enter Graphics Card Brand: ";
        cin >> gpuBrand;
        gpuMemorySize = validateMemoryInput("Enter Graphics Card Memory Size (in GB): ");
        gpuPrice = validateDoubleInput("Enter Graphics Card price: ");
    }
    cout << "Enter storage device Type (1 for Consumer HDD / 2 for NAS HDD / 3 for SSD): ";
    sdnumber = validateIntInput("Choice: ");
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
    storageCapacity = validateMemoryInput("Enter Storage Device Capacity (in GB): ");
    sdprice = validateDoubleInput("Enter Storage Device price: ");
    cout << "Enter Network Card Type: ";
    cin >> networkType;
    networkSpeed = validateIntInput("Enter Network Card Speed (in Mbps): ");
    networkprice = validateDoubleInput("Enter Network Card price: ");
    psWattage = validateIntInput("Enter Power Supply Wattage (in W): ");
    supplyprice = validateDoubleInput("Enter power supply price: ");
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
        caseprice = validateDoubleInput("Enter the price of casing: ");
    }
}

int main() 
{
    inputDataFromUser();
    //objects creation
    ALU* alu = new ALU(adders, subtractors, registers, sizeofRegisters);
    ControlUnit* cu = new ControlUnit(clk);
    CPU cpu;
    if (cpuBrand == "Apple")
        CPU cpu(alu, cu, cpuBrand, cpuArchitecture, "AppleGPU", applegpusize);
    else
        CPU cpu(alu, cu, cpuBrand, cpuArchitecture);
    MainMemory* mm = new MainMemory(mmCapacity, techType);
    MotherBoard mb(mm, numPorts, port);
    PhysicalMemory pm(pmCapacity, pmtype);
    Computer computer(pm, mb, cpu);
    GraphicsCard gpu(gpuBrand, gpuMemorySize, gpuPrice);
    StorageDevice sd(sdtype, storageCapacity, sdprice);
    NetworkCard nc(networkType, networkSpeed, networkprice);
    PowerSupply ps(psRating, psWattage, supplyprice);
    Battery battery(batteryCapacity);
    Case casee(caseFormFactor, caseColor, caseprice);
    double totalPrice = gpuPrice + sdprice + networkprice + supplyprice + caseprice;
    ComputerAssembly assembly(computer, gpu, nc, ps, sd, casee, totalPrice);
    //display the features
    cout << "\"COMPUTER ASSEMBLY DETAILS:\"" << endl;
    cout << "--------------------------" << endl;
    cout << "Motherboard Number of Ports: " << assembly.getComputer().getMotherBoard().getnum() << endl;
    cout << "CPU Brand: " << assembly.getComputer().getCPU().getBrand() << endl;
    cout << "CPU Architecture: " << assembly.getComputer().getCPU().getArchitecture() << endl;
    cout << "GPU Brand: " << assembly.getGraphicsCard().getbrand() << endl;
    cout << "GPU Memory Size: " << assembly.getGraphicsCard().getsize() << " GB" << endl;
    cout << "Storage Device Type: " << assembly.getStorageDevice().getdevice() << endl;
    cout << "Storage Device Capacity: " << assembly.getStorageDevice().getcapacity() << " GB" << endl;
    cout << "Network Card Type: " << assembly.getNetworkCard().getbrand() << endl;
    cout << "Network Card Speed: " << assembly.getNetworkCard().getspeed() << " Mbps" << endl;
    cout << "Power Supply Wattage: " << assembly.getPowerSupply().getwattage() << " W" << endl;
    cout << "Battery Capacity: " << batteryCapacity << " mAh" << endl;
    cout << "Case Form Factor: " << assembly.getCase().getff() << endl;
    cout << "Case Color: " << assembly.getCase().getcolor() << endl;
    cout << "Total Price: $" << assembly.getTotalPrice() << endl;

    return 0;
}

