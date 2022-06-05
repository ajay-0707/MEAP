#include "Lists.h"
#include <iostream>
#include <string>
using std::string;
using namespace std;
int totalList;
namespace Quadruple
{
    Lists::Lists()
    {
        listType = "General";
    }
    void Lists::setList()
    {

        // int totalList;
        cout << "Enter the name of List" << endl;

        getline(cin, listType);

        cout << "How many items do you want to add in your list\n";
        cin >> totalList;

        for (int i = 0; i <= totalList; i++)
        {
            getline(cin, list[i]);
            cout << "Enter " << i + 1 << "th item of the list\n";
        }
    }
    void Lists::displayList()
    {
        cout << "here is your " << listType << "list" << endl;
        for (int i = 1; i <= totalList; i++)
        {
            cout << list[i] << endl;
        }
    }
}