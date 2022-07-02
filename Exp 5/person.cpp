#include<iostream>
using namespace std;

class person
{
        long long int phone_number;
        string name;
    public:
        void read_a()
        {
            cout<<"Enter name and phone number: ";
            cin>>name>>phone_number;
        }
        void show_a()
		{
            cout<<"Phone number is-> "<<phone_number<<endl;
            cout<<"Name is-> "<<name<<endl;
        }
};
class student: private person
{
        int roll_number;
        string course;
    public:
        void read_a()
        {
			person::read_a();
            cout<<"Enter roll number and course: ";
			cin>>roll_number>>course;
        }
        void show_a()
        {
			person::show_a();
            cout<<"Roll number is-> "<<roll_number<<endl;
            cout<<"Course name is-> "<<course<<endl;;
        }
};
int main()
{
    student s;
	s.read_a();
    cout<<"\n*************************************\n"<<endl;
	s.show_a();
	
}
