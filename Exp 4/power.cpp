#include<iostream>
using namespace std;

class Power
{
private:
    double a,b;
    double ans;
public:
    void raisePower(double a, int b)
    {
        ans = 1;
        for(int i=0;i<b;i++)
            ans=ans*a;
        cout<<"Answer: "<<ans<<endl;
    }
    void raisePower(double a)
    {
        ans = 1;
        ans=a*a;
        cout<<"Answer: "<<ans<<endl;
    }
    void raisePower(int a, int b)
    {
        ans = 1;
        for(int i=0;i<b;i++)
            ans=ans*a;
        cout<<"Answer: "<<ans<<endl;
    }
};

int main()
{
    Power p1;
    int x;
    double a,b;
    
	cout<<"1-Square of a number."<<endl;
	cout<<"2-Power of a number."<<endl;
    cin>>x;

    if(x==1)
    {
        cout<<"Enter the Base Value: ";
        cin>>a;
        p1.raisePower(a);
    }
    else if(x==2)
    {
        cout<<"Enter the Base and Power value: ";
        cin>>a>>b;
        p1.raisePower(a,b);
    }
}
