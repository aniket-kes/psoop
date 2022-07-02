#include <iostream>
using namespace std;

class exterior
{
private:
    int length;
    int breadth;
    int hieght;

public:
    void getdata()
    {
        cout << "Enter the length, breadth and height of the house: ";
        cin >> length >> breadth >> hieght;
    }
    int calculate_area()
    {
        return length * breadth * hieght;
    }
};
class paint : public exterior
{
    // 200rs for paint
protected:
    float x;
public:
    void getter()
    {
        getdata();
        cout << "                                   " << endl;
        cout << "|-----|----------|------------|-----|" << endl
             << "|Sr.NO|Paint Type|Brand       |Price|" << endl
             << "|-----|----------|------------|-----|" << endl
             << "|  1  |Distumper |Asian Paints|500/L|" << endl
             << "|-----|----------|------------|-----|" << endl
             << "|  2  |Metallic  |Royale      |600/L|" << endl
             << "|_____|__________|____________|_____|" << endl;
        cout<<"Enter 1 or 2"<<endl;
        cin>>x;
        if (x == 1)
        {
            x = calculate_area() / 50;
            x*=500;
        }
        else
        {
            x = calculate_area() / 50;
            x*=600;
        }
    }
};
class bill : public paint
{
public:
    void cal()
    {
        cout << "Total price will be " << x << endl;
    }
};

int main()
{
    bill b;
    b.getter();
    b.cal();
    return 0;
}
