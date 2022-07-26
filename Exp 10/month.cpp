#include <bits/stdc++.h>
using namespace std;

class month_error
{
public:
    string sho;
    month_error(string s)
    {
        sho = s;
    }
};
class day_error
{
public:
    string sho;
    day_error(string s)
    {
        sho = s;
    }
};

int main()
{
    string s;
    int month, date;
    char ch,x;

top:
    cout << endl
         << "Enter date in (Month/Date) numeric notation :- ";
    cin >> s;

    stringstream ss(s);

    try
    {
        ss >> month;
        ss >> ch;
        if (ch != '/')
            throw month_error("Invalid Month");
        else if (!(month >= 1 && month <= 12))
            throw month_error("Invalid Month");
        else
            ch = '*';

        ss >> date;
        ss >> ch;
        if (ch != '*')
            throw day_error("Invalid day");
        else if (!(date >= 1 && date <= 31))
            throw day_error("Invalid day");
        else
        {
            
            if (month == 1 && date <= 31){
                cout<<"That is same as"<<endl;
                cout << "January " << date;
            }
            else if (month == 2 && date <= 29){
                cout<<"That is same as"<<endl;
                cout << "February " << date;
            }
            else if (month == 3 && date <= 31){
                cout<<"That is same as"<<endl;
                cout << "March " << date;
            }
            else if (month == 4 && date <= 30){
                cout<<"That is same as"<<endl;
                cout << "April " << date;
            }
            else if (month == 5 && date <= 31){
                cout<<"That is same as"<<endl;
                cout << "May " << date;
            }
            else if (month == 6 && date <= 30){
                cout<<"That is same as"<<endl;
                cout << "June " << date;
                }
            else if (month == 7 && date <= 31){
                cout<<"That is same as"<<endl;
                cout << "July " << date;
                }
            else if (month == 8 && date <= 31){
                cout<<"That is same as"<<endl;
                cout << "August " << date;
                }
            else if (month == 9 && date <= 30){
                cout<<"That is same as"<<endl;
                cout << "September " << date;
                }
            else if (month == 10 && date <= 31){
                cout<<"That is same as"<<endl;
                cout << "October " << date;
                }
            else if (month == 11 && date <= 30){
                cout<<"That is same as"<<endl;
                cout << "November " << date;
                }
            else if (month == 12 && date <= 31){
                cout<<"That is same as"<<endl;
                cout << "December " << date;
                }
            else
            {
                cout << "Invalid Date in Given Month"<<endl
                     << "Enter valid date";
            }
        }
    }
    catch (month_error m)
    {
        cout << m.sho;
    }
    catch (day_error d)
    {
        cout << d.sho;
    }
    
bottom:
        try
        {
            cout << endl
                << "\nWant to repeat ? (y/n) : ";
            cin >> x;
            if (x == 'y')
                goto top;
            else if(x=='n')
                return 0;
            else
                throw x;
            
        }
        catch(...)
        {
            cout<<"Invalid Output"<<endl; 
        }
        cout<<"Enter correct choice"<<endl;
        goto bottom;      

}
