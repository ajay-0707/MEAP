#include "Info.h"
#include <string>
#include <iostream>
using std::string;
using namespace std;
namespace Quadruple
{
    Info::Info()
    {
        panNumber = "none";
        aadharNumber = "none";
        insuranceNumber = "none";
        accountNumber = "none";
    }
    void Info::getInfo()
    {
        // cout << "\nEnter yout infortant Info here";
        cout << "Enter your pan number\n";
        getline(cin, panNumber);

        cout << "Enter your aadhar number\n";
        getline(cin, aadharNumber);

        cout << "Enter your Insurance number\n";
        getline(cin, insuranceNumber);

        cout << "Enter your account number\n";
        getline(cin, accountNumber);
    }
    void Info::displayInfo()
    {
        cout << "\nHere is all your important information Sir!" << endl;
        cout << "PAN: " << panNumber << endl;
        cout << "AADHAR: " << aadharNumber << endl;
        cout << "INSURANCE: " << insuranceNumber << endl;
        cout << "ACCOUNT: " << accountNumber << endl;
    }
}