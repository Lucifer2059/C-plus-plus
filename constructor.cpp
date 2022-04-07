// A simple program to display using constructor.
#include <iostream>
using namespace std;
class rabean
{
private:
    string name;

public:
    rabean(void); // constructor declaration
    void print()
    {
        cout << "Your type :" << name << endl;
    }
    void input()
    {
        cout << "WHat is on your mind" << endl;
        getline(cin, name);
    }
};

rabean::rabean(void)
{
}
int main()
{
    rabean x, y, z;
    x.input();
    y.input();
    z.input();
    x.print();
    y.print();
    z.print();
    return 0;
}