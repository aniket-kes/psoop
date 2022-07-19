#include <iostream>
using namespace std;
class Comp_interest
{
  protected:
  double balance;
  double rate;
  int months;

  public:
  Comp_interest()
  {
  	balance=0;
  	rate=0;
  	months=0;
  }  
  
  double calc_interest(double a, int c, double b)
  	{
  		balance=a;
  		months=c;
  		rate=b;

  		for(int i = 0;i < months;i++)
        {
            double balanceDue;
            double interestDue;

            balanceDue = balance + (balance * rate/100);
            balance = balanceDue;


        }

        return balance;
  	}
  
 ~Comp_interest()
  {
  	cout<<"Destructor is called for Comp_interest class"<<endl;
  }

};

int main()
{
    Comp_interest x;
    int choice;
    cout<<"Enter the way you want to calculate the interest from the following list:"<<endl;
    cout<<"1. Same Data"<<endl;
    cout<<"2. Different Data"<<endl;
    cin>>choice;
    
    if(choice==1)
    {
         int n;
    
         cout<<"Enter the number of times you want to calculate the interest: "<<endl;
         cin>>n;
         double a,b,d;
         int c;
         cout<<"Enter the Principal amount or balance:"<<endl;
  	     cin>>a;
  	     cout<<"Enter the Rate of interest(integer):"<<endl;
  	     cin>>b;
    	 cout<<"Enter the number of months:"<<endl;
      	 cin>>c;
      	 cout<<"------------------SAME DATA-------------------"<<endl;
         while(n--)
        {
       
  	       d=x.calc_interest(a,c,b);
           cout<<"The total amount after calculating the interest for the given period of time is Rs "<<d<<endl;
           a=0;
           a=a+d;
         }
    }
    
    else if(choice==2)
    {
        int n;
    
         cout<<"Enter the number of times you want to calculate the interest: "<<endl;
         cin>>n;
      	 cout<<"------------------DIFFERENT DATA-------------------"<<endl;
         while(n--)
        {
           double a,b,d;
         int c;
         cout<<"Enter the Principal amount or balance:"<<endl;
  	     cin>>a;
  	     cout<<"Enter the Rate of interest(integer):"<<endl;
  	     cin>>b;
    	 cout<<"Enter the number of months:"<<endl;
      	 cin>>c;
       
  	       d=x.calc_interest(a,c,b);
           cout<<"The total amount after calculating the interest for the given period of time is Rs "<<d<<endl;
          
         }
    }
    
    else
    {
        cout<<"INVALID NUMBER"<<endl;
    }
   
    return 0;
}
