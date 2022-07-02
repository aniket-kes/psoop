#include<iostream>
using namespace std;

class home
{
	protected:
		int no_rooms;
		int area;
	public:
		home()
		{
			int no_rooms=1;
			int area=500;
		}
		void getter()
		{
			cout<<"Enter the number of rooms: ";
			cin>>no_rooms;
			cout<<"Enter the total square area of the room ";
			cin>>area;
		}
		void display()
		{
			cout<<"Total number of rooms are: "<<no_rooms<<endl;
			cout<<"Total Area is : "<<area<<endl;
		}
};

class car
{
	protected:
		string car_number;
		int seating;
		string model;
	public:
		car()
		{
			string car_number="MH0XY0000";
			int seating = 5;
			string model = "SEDAN";
		}
		void getter()
		{
			
			cout<<"Enter the car number: ";
			cin>>car_number;
			cout<<"Enter the seating capacity of the car: ";
			cin>>seating;
			cout<<"Enter the model of the car: ";
			cin>>model;
		}
		void display()
		{
			
			cout<<"The car number is "<<car_number<<endl;
			cout<<"The seating capacity of the car is "<<seating<<endl;
			cout<<"Model of the car is "<<model<<endl;
		}
};
class motorhomes:public home, public car
{
	protected:
		string CATEGORY;
	public:
		motorhomes()
		{
			string CATEGORY="ECONOMY";
		}
		void getter()
		{
			home::getter();
			car::getter();
			cout<<"Enter the Category of the car "<<endl
				<<"(LUXURY , FIRSTCLASS, MIDDLECLASS, ECONOMY)";
			cin>>CATEGORY;
		}
		void display()
		{
			cout<<"\n\n-----------------------------------------\n\n";
			home::display();
			car::display();
			cout<<"The category of the car is "<<CATEGORY<<endl;
		}
};
int main()
{
	motorhomes m;
	m.getter();
	m.display();
	return 0;
}
