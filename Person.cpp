#include "iostream"
#include "string"
using std::string;
#include "Reminder.h"
#include "Schedule.h"
#include "Info.h"
#include "Lists.h"
#include "Task.h"

#include <fstream>
using Quadruple::Info;
using Quadruple::Lists;
using Quadruple::Reminder;
using Quadruple::Schedule;
using Quadruple::Task;
using namespace std;
class Person
{
private:
    string Name;
    int Id;

public:
    Person(string name, int id)
    {
        Name = name;
        Id = id;
    }
    Reminder r;
    Schedule sc;
    Info infoob;
    Lists lob;
    Task tob;
    void getData()
    {
        cout << "enter your name" << endl;
        getline(cin, Name);
        cout << "enter your id" << endl;
        cin >> Id;
    }
    int getId()
    {
        return Id;
    }
    void displayMessage()
    {
        cout << "Welcome " << Name << endl;
    }
};
int main()
{

    Person p("Quadruple A", 100);
    fstream ob;
    ob.open("Quadruple.txt", ios::out | ios::in);
    cout << "THIS IS PERSONAL INFORMATION MANAGEMENT PROJECT "
         << "\n\n";
    cout << "MEAP-Manages Efficiency And Productivity" << endl;

    cout << "Developed and managed by =>THE QUADRUPLE A" << endl;

    cout << "Here is the services provided by the Project" << endl;
    cout << "But wait first you need to verify yourself .Enter the secret Id and Proceed forward" << endl;
    cout << "**************************************************" << endl;
    cout << "[1]: To edit name and unique Id" << endl;
    cout << "[2]: To continue with default name and Id" << endl;
    int y;
    cin >> y;
    cin.ignore(1, '\n');
    if (y == 1)
    {
        p.getData();
    }
    else
    {
        cout << "You are continuining with defaul name and id" << endl;
    }
    cout << "Enter your Id sir for verification!" << endl;
    int x;
    cin >> x;
    int choice;
    if (x == p.getId())
    {
        p.displayMessage();

        do
        {

            cout << "*********************************************************" << endl;
            cout << "Choose the appropriate option" << endl;
            cout << "[1]: Important Information" << endl;
            cout << "[2]: Check Reminders" << endl;
            cout << "[3]: Schedule of the Day" << endl;
            cout << "[4]: Make a list of anytype" << endl;
            cout << "[5]: Task of the Day" << endl;
            cout << "[6]: Exit(Bye-Bye)" << endl;
            cout << endl;
            cout << "M***********E*********A*********P" << endl;
            cout << "Enter your choice Sir\n";
            cin >> choice;
            char ch;
            switch (choice)
            {
            case 1:
            {

                cout << "[a]: Edit your Personal Information\n";
                cout << "[b]: Display your Personal Information" << endl;
                cout << "[c]: Seach Default Information" << endl;
                cout << "[d]: Back" << endl;
                cout << "*****************************************" << endl;
                cout << "What you want to do Sir?\n";
                cin >> ch;
                cin.ignore(1, '\n');

                if (ch == 'a')
                {
                    p.infoob.getInfo();
                    ob.write((char *)&p.infoob, sizeof(p.infoob));
                    ob.clear();
                    ob.seekp(0);
                }
                else if (ch == 'b')
                {
                    ob.read((char *)&p.infoob, sizeof(p.infoob));
                    p.infoob.displayInfo();
                    ob.seekg(0);
                }
                else if (ch == 'c')
                {
                    p.infoob.displayInfo();
                }
                else
                {
                    break;
                }
            }
            break;
            case 2:
            {
                cout << "[a]: Edit/Add your Reminders" << endl;
                cout << "[b]: Display your reminders" << endl;
                cout << "[c]: Seach  preexisting Reminders" << endl;
                cout << "[d]: Back" << endl;
                cout << "*****************************************" << endl;
                cout << "What you want to do Sir?" << endl;
                cin >> ch;
                cin.ignore(1, '\n');

                if (ch == 'a')
                {
                    p.r.editData();
                    ob.write((char *)&p.r, sizeof(p.r));
                    ob.clear();
                    ob.seekp(0);
                }
                else if (ch == 'b')
                {
                    ob.read((char *)&p.r, sizeof(p.r));
                    p.r.displayData();
                    ob.seekg(0);
                }
                else if (ch == 'c')
                {
                    p.r.displayData();
                }
                else
                {
                    break;
                }
            }
            break;
            case 3:
            {
                cout << "[a]: Make/Edit your weekly schedule" << endl;
                cout << "[b]: Display your Schedule" << endl;
                cout << "[c]: Seach your Schedule" << endl;
                cout << "[d]: Back" << endl;
                cout << "*****************************************" << endl;
                cout << "What you want to do Sir?" << endl;
                cin >> ch;
                cin.ignore(1, '\n');

                if (ch == 'a')
                {
                    p.sc.getSchedule();
                    ob.write((char *)&p.sc, sizeof(p.sc));
                    ob.clear();
                    ob.seekp(0);
                }
                else if (ch == 'b')
                {
                    ob.read((char *)&p.sc, sizeof(p.sc));
                    p.sc.displaySchedule();
                    ob.seekg(0);
                }
                else if (ch == 'c')
                {
                    p.sc.displaySchedule();
                }
                else
                {
                    break;
                }
            }
            break;
            case 4:
            {
                cout << "[a]: Make your list" << endl;
                cout << "[b]: Display the list" << endl;
                cout << "[c]: Seach the list" << endl;
                cout << "[d]: Back" << endl;
                cout << "*****************************************" << endl;
                cout << "What you want to do Sir?" << endl;
                cin >> ch;
                cin.ignore(1, '\n');

                if (ch == 'a')
                {
                    p.lob.setList();
                    ob.write((char *)&p.lob, sizeof(p.lob));
                    ob.clear();
                    ob.seekp(0);
                }
                else if (ch == 'b')
                {
                    ob.read((char *)&p.lob, sizeof(p.lob));
                    p.lob.displayList();
                    ob.seekg(0);
                }
                else if (ch == 'c')
                {
                    p.lob.displayList();
                }
                else
                {
                    break;
                }
            }
            break;
            case 5:
            {
                cout << "[a]: Edit your task of the day" << endl;
                cout << "[b]: Display your task of the day" << endl;
                cout << "[c]: Seach earlier task " << endl;
                cout << "[d]: Back" << endl;
                cout << "*****************************************" << endl;
                cout << "What you want to do Sir?" << endl;
                cin >> ch;
                cin.ignore(1, '\n');

                if (ch == 'a')
                {
                    p.tob.getSchedule();
                    ob.write((char *)&p.tob, sizeof(p.tob));
                    ob.clear();
                    ob.seekp(0);
                }
                else if (ch == 'b')
                {
                    ob.read((char *)&p.tob, sizeof(p.tob));
                    p.tob.displayTask();
                    ob.seekg(0);
                }
                else if (ch == 'c')
                {
                    p.tob.displayTask();
                }
                else
                {
                    break;
                }
            }
            break;
            case 6:
            {
                break;
            }
            default:
                cout << "You have not entered any valid choice .TRY AGAIN" << endl;
            }

        } while (choice != 6);
    }
    else
    {
        cout << "Sorry Sir ! You are allowed in this sysetem" << endl;
    }
    ob.close();

    return 0;
}
