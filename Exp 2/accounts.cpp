#include <iostream>
#include <string>
using namespace std;
class bank
{
    string name;
    int acc;
    string type;
    int bal;

public:
    bank()
    {
        name = "unknown";
        acc = 0;
        type = "Savings";
        bal = 10000;
    }
    void getdata(void)
    {
        cout << "enter the name " << endl;
        cin >> name;
        cout << "enter the acc no." << endl;
        cin >> acc;
        cout << "enter the type of acc" << endl;
        cin >> type;
        cout << "enter the total balance" << endl;
        cin >> bal;
    }
    void deposit(int dep)
    {
        bal = bal + dep;
        cout << "New Balance:" << bal << endl;
    }
    void withdraw(int with)
    {
        if (bal >= with)
        {
            bal = bal - with;
            cout << "New Balance:" << bal << endl;
        }
        else
        {
            cout << "Balance not enough.";
        }
    }
    void display(void)
    {
        cout << "Name : " << name << endl;
        cout << "acc no. :" << acc << endl;
        cout << "Type of acc :" << type << endl;
        cout << "Total Balance:" << bal << endl;
    }
};
int main()
{
    bank b;
    int n;
    int x;
    int dep;
    int with;
    b.display();
    cout << "Enter the number of people: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        b.getdata();
        cout << "Enter 1 to deposit amount or Enter 0 to cancel deposit."
             << endl;
        cin >> x;
        if (x == 1)
        {
            cout << "Enter the amount to deposit :" << endl;
            cin >> dep;
            b.deposit(dep);
        }
        cout << "Enter 1 to withdraw amount or Enter 0 to cancel withdraw."
             << endl;
        cin >> x;
        if (x == 1)
        {
            cout << "Enter the amount to withdraw :" << endl;
            cin >> with;
            b.withdraw(with);
            b.display();
        }
    }
    return 0;
}
