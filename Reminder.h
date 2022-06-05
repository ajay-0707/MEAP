#ifndef REMINDER_H
#define REMINDER_H
#include <string>

using std::string;
namespace Quadruple
{
    class Reminder
    {
    private:
        string docAppoint;
        string dueIncomeDate;
        string dueInsuranceDate;

    public:
        Reminder();

        void displayData();
        void editData();
    };

}
#endif
