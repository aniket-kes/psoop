#include<iostream>
using namespace std;

class vehicle
{
    int wheels;
    int engine_capcity;
    public:
        vehicle()
        {
            wheels=4*0;
            engine_capcity=1200*0;
        }
        virtual void spec()=0;
        virtual void display_stats()=0;
};
class LMV:public vehicle
{
        int speed;
        int mileage;
        int rpm;
    public:
        LMV()
        {
            speed=0;
            mileage=0;
            rpm=0;
        }
        ~LMV()
        {
            cout<<"Destructor of LMV class Called...."<<endl;
        }
        void spec()
        {
            cout<<"Enter the speed of LMV: ";
            cin>>speed;
            cout<<"Enter the mileage of the LMV: ";
            cin>>mileage;
            cout<<"Enter the RPM of the LMV: ";
            cin>>rpm;
        }
        void display_stats()
        {
            cout<<"\n\n------------------------------\n\n";
            cout<<"The speed of the LMV vehicle is "<<speed<<endl;
            cout<<"The mileage of the LMV vehicle is "<<mileage<<endl;
            cout<<"The RPM of the LMV vehicle is "<<rpm<<endl;
            cout<<"\n\n*********************************\n\n";
        }
};
class HMV:public vehicle
{
        int speed;
        int mileage;
        int rpm;
    public:
        HMV()
        {
            speed=0;
            mileage=0;
            rpm=0;
        }
        ~HMV()
        {
            cout<<"Destructor of HMV class Called...."<<endl;
        }
        void spec()
        {
            cout<<"Enter the speed of HMV: ";
            cin>>speed;
            cout<<"Enter the mileage of the HMV: ";
            cin>>mileage;
            cout<<"Enter the RPM of the HMV: ";
            cin>>rpm;
        }
        void display_stats()
        {
            cout<<"\n\n------------------------------\n\n";
            cout<<"The speed of the HMV vehicle is "<<speed<<endl;
            cout<<"The mileage of the HMV vehicle is "<<mileage<<endl;
            cout<<"The RPM of the HMV vehicle is "<<rpm<<endl;
            cout<<"\n\n*********************************\n\n";
        }
};
class TMV:public vehicle
{
        int speed;
        int mileage;
        int rpm;
    public:
        TMV()
        {
            speed=0;
            mileage=0;
            rpm=0;
        }
        ~TMV()
        {
            cout<<"Destructor of TMV class Called...."<<endl;
        }
        void spec()
        {
            cout<<"Enter the speed of TMV: ";
            cin>>speed;
            cout<<"Enter the mileage of the TMV: ";
            cin>>mileage;
            cout<<"Enter the RPM of the TMV: ";
            cin>>rpm;
        }
        void display_stats()
        {
            cout<<"\n\n------------------------------\n\n";
            cout<<"The speed of the TmV vehicle is "<<speed<<endl;
            cout<<"The mileage of the TMV vehicle is "<<mileage<<endl;
            cout<<"The RPM of the TMV vehicle is "<<rpm<<endl;
            cout<<"\n\n*********************************\n\n";
        }
};
int main()
{
    vehicle *ptr[3];
    LMV l;
    ptr[0]=&l;
    HMV h;
    ptr[1]=&h;
    TMV t;
    ptr[2]=&t;

    //LMV->Light Motor Vehicle
    ptr[0]->spec();
    ptr[0]->display_stats();

    //HMV->Heavy Motor Vehicle
    ptr[1]->spec();
    ptr[1]->display_stats();

    //TMV->Two Motor Vehicle   
    ptr[2]->spec();
    ptr[2]->display_stats();
}
