#ifndef SCHEDULE_H
#define SCHEDULE_H
#include <string>
using std::string;
using namespace std;
namespace Quadruple
{
    class Schedule
    {
    private:
        string mondaySchedule;
        string tuesdaySchedule;
        string wednesdaySchedule;
        string thursdaySchedule;
        string fridaySchedule;
        string saturdaySchedule;
        string sundaySchedule;

    public:
        Schedule();
        void getSchedule();
        // void editSchedule();
        void displaySchedule();
    };
}
#endif