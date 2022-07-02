#include<iostream>
using namespace std;

class Date
{
        int year;
        int month;
        int date;
        int hrs;
        int min;
        int sec;
    public:
        Date()
        {
            year=2000;
            month=1;
            date=1;
            hrs=00;
            min=00;
            sec=00;
        }
        void setDate(int year, int month, int date)
        {
            this->year=year;
            this->month=month;
            this->date=date;
            displayDate();
        }
        void setDate(int year, int month, int date, int hrs, int min)
        {
            this->year=year;
            this->month=month;
            this->date=date;
            this->hrs=hrs;
            this->min=min;
            displayDate();
        }
        void setDate(int year, int month, int date, int hrs, int min, int sec)
        {
            this->year=year;
            this->month=month;
            this->date=date;
            this->hrs=hrs;
            this->min=min;
            this->sec=sec;
            displayDate();
        }
        void displayDate()
        {
            cout<<"Date is: "<<date<<"/"<<month<<"/"<<year<<endl;
            cout<<"Time is: "<<hrs<<":"<<min<<":"<<sec<<endl;
        }
};
int main()
{
    Date d1;
    int date,month,year;
    int hrs,min,sec;
    int x;
    cout<<"1->Year, month and date"<<endl
        <<"2->Year, month, date, hrs, min"<<endl
        <<"3->Year, month, date, hrs, min, sec"<<endl;
    cin>>x;
    if(x==1)
    {
        cout<<"Enter Year, month and date: ";
        cin>>year>>month>>date;
        d1.setDate(year,month,date);
    }
    else if(x==2)
    {
        cout<<"Enter Year, month, date, hrs, min: ";
        cin>>year>>month>>date>>hrs>>min;
        d1.setDate(year,month,date,hrs,min);
    }
    else if(x==3)
    {
        cout<<"Enter Year, month, date, hrs, min, sec: ";
        cin>>year>>month>>date>>hrs>>min>>sec;
        d1.setDate(year,month,date,hrs,min,sec);
    }
    return 0;
}
