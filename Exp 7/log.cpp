#include<iostream>
#include <cmath>
using namespace std;

class logarithm
{
	public:
		virtual double Log (double x)=0;
};
class Log10:public logarithm
{
	double x;
	public:
		double Log (double x)
		{
			return log10(x);
		}
}a;
class LogE:public logarithm
{
	double x;
	public:
		double Log (double x)
		{
			return log(x);
		}
}b;
class Log2:public logarithm
{
	double x;
	public:
		double Log (double x)
		{
			return log2(x);
		}
}c;
int main()
{
    int choice;
    int x;
      cout << "Enter your choice according to the list:" << endl;
      cout << "1-> Log to the base 10" << endl << "2-> Log to the base e" << endl
	<< "3-> Log to the base 2" << endl;
      cin >> choice;
    if(choice==1)
    {
        cout<<"Enter the number: ";
        cin>>x;
        cout<<"Log to the base 10 is "<<a.Log(x)<<endl;
    }
    else if(choice==2)
    {
        cout<<"Enter the number: ";
        cin>>x;
        cout<<"Log to the base e is "<<b.Log(x)<<endl;
    }
    else if(choice==3)
    {
        cout<<"Enter the number: ";
        cin>>x;
        cout<<"Log to the base 2 is "<<c.Log(x)<<endl;
    }
    else
        cout<<"Invalid Input!"<<endl;
    return 0;
}
