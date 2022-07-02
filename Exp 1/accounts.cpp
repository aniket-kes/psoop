#include<iostream>

using namespace std;

class account
{

    char name[100];
    int acc_no;
    char acc_type[100];
    int balance;
    int deposited;
    int withdrawn;
    int balance1;
    int balance2;
    int choice;

public:
    void getdata(void);
    void display_name_balance(void);
};

void account ::getdata(void)
{
    cout << "Enter the Name of the depositor: ";
    cin >> name;

    cout << "Enter the account number of the account:";
    cin >> acc_no;

    cout << "Enter the account type: ";
    cin >> acc_type;

    cout << "Enter the initial balance in the account: ";
    cin >> balance;

    cout << "*********************" << endl;

    cout << "Enter '0' to get info ." << endl
         << "Enter '1' to deposit money into account." << endl
         << "Enter '2' to withdraw money." << endl;
    cin >> choice;

    if (choice == 1)
    {
        cout << "Enter the amount to be deposited: ";
        cin >> deposited;

        balance1 = (balance + deposited);
    }

    else if (choice == 2)
    {

        cout << "Enter the amount to withdraw: ";
        cin >> withdrawn;

        balance2 = (balance - withdrawn);
        cout << endl;
    }
}
void account ::display_name_balance(void)
{
    cout << "*********************" << endl;
    cout << endl;
    cout << "Name of Account Holder: " << name << endl;

    if (choice == 1)
    {
        cout << "CURRENT BALANCE: " << balance1 << endl;
        cout << endl;
        cout << "*********************" << endl;
    }

    else if (choice == 2)
    {
        cout << "CURRENT BALANCE: " << balance2 << endl;
        cout << endl;
        cout << "*********************" << endl;
    }

    else
    {
        cout << "CURRENT BALANCE: " << balance << endl;
        cout << endl;
        cout << "*********************" << endl;
    }
}

int main()
{

    account first;

    first.getdata();
    first.display_name_balance();
}
