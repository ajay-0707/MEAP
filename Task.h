#ifndef TASK_H
#define TASK_H
#include <string>
#include "Schedule.h"
using std::string;
using namespace std;
namespace Quadruple
{
    class Task : public Schedule
    {
    private:
        string taskOfTheDay;

    public:
        Task();
        void getSchedule();
        void displayTask();
    };
}
#endif