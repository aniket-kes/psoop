#include <iostream>
using namespace std;

class GrandFather
{
protected:
    int Grand_property;

public:
    void getdata()
    {
        cout << "Enter the Grandfather property: ";
        cin >> Grand_property;
    }
};
class father : public GrandFather
{
public:
    int m;
    void getter()
    {
        getdata();
        cout << "Enter the father's self earned property: ";
        cin >> m;
    }
};
class son : public father
{
public:
    void display()
    {
        cout << "Your total propety is : " << m + Grand_property << endl; 
    }
};
int main()
{
    son s;
    s.getter();
    s.display();
    return 0;
}
