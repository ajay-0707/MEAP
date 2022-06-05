#include "iostream"
#include "string"

#include "Reminder.h"
using namespace std;
using std::string;
namespace Quadruple
{
    // string app, string inc, string ins
    Reminder::Reminder()
    {
        docAppoint = "none";
        dueIncomeDate = "none";
        dueInsuranceDate = "none";
    }
    void Reminder::editData()
    {
        cout << "edit previous data " << endl;
        cout << "edit doctor Appointment" << endl;
        getline(cin, docAppoint);

        cout << "edit due income tax date" << endl;
        getline(cin, dueIncomeDate);

        cout << "edit due insurance date" << endl;
        getline(cin, dueInsuranceDate);
    }
    void Reminder::displayData()
    {
        cout << "Enter the date in dd-mm-year format" << endl;
        cout << "the Doctor appointment date is :" << docAppoint << endl;
        cout << "Due date to pay income date is :" << dueIncomeDate << endl;
        cout << "the Date for insurance renewal is:" << dueInsuranceDate << endl;
    }

}
