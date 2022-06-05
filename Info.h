#ifndef INFO_H
#define INFO_H
#include <iostream>
#include <string>
using std::string;
using namespace std;
namespace Quadruple
{
    class Info
    {
    private:
        string panNumber;
        string aadharNumber;
        string insuranceNumber;
        string accountNumber;

    public:
        Info();
        void getInfo();
        void displayInfo();
    };
}
#endif