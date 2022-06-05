#ifndef __LISTS_H
#define __LISTS_H
#define maxItem 10
#include <string>
using std::string;
namespace Quadruple
{
    class Lists
    {
    private:
        string listType;

        string list[maxItem];

    public:
        Lists();
        void setList();
        void displayList();
    };

}
#endif