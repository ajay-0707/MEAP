#include <iostream>
#include "Schedule.h"
#include <string>
using std::string;
using namespace std;
namespace Quadruple
{
    Schedule::Schedule()
    {
        mondaySchedule = "None";
        tuesdaySchedule = "None";
        wednesdaySchedule = "None";
        thursdaySchedule = "None";
        fridaySchedule = "None";
        saturdaySchedule = "None";
        sundaySchedule = "None";
    }
    void Schedule::getSchedule()
    {
        cout << "\nEnter your work of this week" << endl;
        cout << "\nWhat is the schedule of monday" << endl;
        getline(cin, mondaySchedule);
        cout << "what is the schedule of tuesday" << endl;
        getline(cin, tuesdaySchedule);
        cout << "what is the schedule of wednesday" << endl;
        getline(cin, wednesdaySchedule);
        cout << "what is the schedule of thursday" << endl;
        getline(cin, thursdaySchedule);
        cout << "what is the scedule of friday" << endl;
        getline(cin, fridaySchedule);
        cout << "what is the schedule of saturday" << endl;
        getline(cin, saturdaySchedule);
        cout << "what is the schedule of sunday" << endl;
        getline(cin, sundaySchedule);
    }
    void Schedule::displaySchedule()
    {
        cout << "Here is your Schedule Sir!!!" << endl;
        cout << "Monday=>" << mondaySchedule << endl;
        cout << "tuesday=>" << tuesdaySchedule << endl;
        cout << "wednesday=>" << wednesdaySchedule << endl;
        cout << "thursday=>" << thursdaySchedule << endl;
        cout << "friday=>" << fridaySchedule << endl;
        cout << "saturday=>" << saturdaySchedule << endl;
        cout << "sunday=> " << sundaySchedule << endl;
    }
}