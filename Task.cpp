#include <iostream>
// #include <string>
#include "Task.h"
#include "Schedule.h"
using std::string;
using namespace std;
namespace Quadruple
{
    Task::Task() : Schedule()
    {
        taskOfTheDay = "None please edit it.";
    }
    void Task::getSchedule()
    {
        cout << "Have a look at your weekly schedule and add task accordingly" << endl;
        Schedule::displaySchedule();
        cout << "So what is the task of the Day" << endl;
        getline(cin, taskOfTheDay);
    }
    void Task::displayTask()
    {
        cout << "Here is your task of the day" << endl;
        cout << taskOfTheDay << endl;
    }
}