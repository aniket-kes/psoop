#include<iostream>
using namespace std;

class coworker
{
        string name;
        string adress;
        string division;
    public:
        coworker()
        {
            name="EMPLOYEE";
            adress="OFFICE";
            division="HQ";
        }
        virtual ~coworker()
        {
            cout<<"Destructor of coworker has been called..."<<endl;
        }
        virtual void getter()
        {
            cout<<"Enter the name of the coworker: ";
            cin>>name;
            cout<<"Enter the adress of the coworker: ";
            cin>>adress;
            cout<<"Enter the division of the coworker: ";
            cin>>division;
        }
        virtual void display()
        {
            cout<<"The name of the employee is "<<name<<endl;
            cout<<"The adress of the employee is "<<adress<<endl;
            cout<<"The division of the employee is "<<division<<endl;
        }
};
class laborer:public coworker
{
        int wages;
        int hours;
    public:
        laborer()
        {
            wages=100*0;
            hours=5*0;
        }
        ~laborer()
        {
            cout<<"Destructor of laborer has been called..."<<endl;
        }
        void getter()
        {
            coworker::getter();
            cout<<"Enter the wages per hour: ";
            cin>>wages;
            cout<<"Enter the hours: ";
            cin>>hours;
        }
        void display()
        {
            coworker::display();
            cout<<"The wage per "<<hours<<" hours will be "<<wages*hours<<endl;
        }
};
class employee:public coworker
{
        int salary;
    public:
        employee()
        {
            salary=1000;
        }
        ~employee()
        {
            cout<<"Destructor of employee has been called..."<<endl;
        }
        void getter()
        {
            coworker::getter();
            cout<<"Enter the salary of the employee: ";
            cin>>salary;
        }
        void display()
        {
            coworker::display();
            cout<<"The salary of the employee is "<<salary<<endl;
        }
};
int main()
{
    coworker* ptr[1];
    laborer l;
    ptr[0]=&l;
    employee e;
    ptr[1]=&e;
    int x;
    cout<<"Choose the cowrker: "<<endl
        <<"1-Laborer"<<endl
        <<"2-Employee"<<endl;
    cin>>x;
    if(x==1)
    {
        ptr[0]->getter();
        ptr[0]->display();
    }
    else
    {
        ptr[1]->getter();
        ptr[1]->display();
    }
    return 0;
}
