#include<iostream>
#include<math.h>
using namespace std;

class series
{
    int n;
    float x;
    int fact;
    int sign;
    float sum;
    int p;


    public:

 

    series(int a,float b)
    {
        n=a;
        x=b;
    }

    void display()
    {
        fact=1;
        sign=-1;
        sum=x;
        p=2;
    
    cout<<"SINE "<<"( "<<x<<" ) ="<<"( "<<x<<" )";

        for (int  i = 3; i <=n; i+=2,p++)
        {
            fact=fact*i*(i-1);
            sum=sum+sign*pow(x,i)/fact;
            sign=sign*(-1);

            if (p%2==0)
            {
                cout<<" - ";

            }

            else
            {
                cout<<" + ";
            }
            
            cout<<"( "<<pow(x,i)<<"/"<<i<<"! )";

        }
        cout<<endl<<endl;

        cout<<"The SINE value of "<<x<<" upto "<<n<<" terms is "<<sum<<endl;
        
    }
     
};

int main()
{
    int a;
    float b;

    cout<<"Enter the no of terms: ";
    cin>>a;
    cout<<"Enter the angle in degrees: ";
    cin>>b;
    cout<<endl;
    cout<<endl;
    b=b*3.14/180;

    series s2(a,b);
   
    s2.display();
    return 0;
}
