#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<cmath>
using namespace std; 

void Choice(int x, int y, string O)
{
   if (O=="+")
   {
        cout<<"YOU HAVE CHOSEN ADDITION. "<<endl;
        cout<<"THE ADDITION OF "<<x<<" and "<<y<<" is "<<x+y<<endl;
   }
   else if(O=="-")
   {
        cout<<"YOU HAVE CHOSEN SUBTRACTION. "<<endl;
        cout<<"THE SUBTRACTION OF "<<y<<" from "<<x<<" is "<<x-y<<endl;
   }
   else if(O=="*")
   {
        cout<<"YOU HAVE CHOSEN MULTIPLICATION. "<<endl;
        cout<<"THE MULTIPLICATION OF "<<x<<" and "<<y<<" is "<<x*y<<endl;
   }
   else if(O=="/")
   {
        if(y==0)
        {
            throw 0;
        }
        else
        {
            cout<<"YOU HAVE CHOSEN DIVISION. "<<endl;
            cout<<"THE DIVISION OF "<<x<<" and "<<y<<" is "<<x/y<<endl;
        }
   }
   else if (O=="log")
   {
        if(x==1)
        {
            throw 1;
        }
        else
        {
            cout<<"YOU HAVE CHOSEN LOGARITHM. "<<endl;
            cout<<"ANSWER: "<<log(y)/log(x)<<endl;
        }   
   }
   else if(O=="^")
   {
        cout<<"YOU HAVE CHOSEN RAISED TO FUNCTION. "<<endl;
        cout<<"THE VALUE OF "<<x<<" RAISED TO "<<y<<" is "<<(x^y)<<endl;
   }  
}

int check(string d)
{
     int w=0;
    for(int i=0; i<d.length(); i++)
    {
        if(isdigit(d[i]))
        {
            w=1;
        }
        else
        {
            w=0;
            break;
        }
    }

    return w;
}


int main()
{
    string m,n;
    string type;
    int a,b,z=0;
    do
    {
        cout<<"The expression is in the form of a+b."<<endl;
        try
       {
          
          cout<<"Enter the values of a and b: "<<endl;
          cin>>m>>n;

          if(check(m)==1 && check(n)==1)
          {
             a=atoi(m.c_str());
             b=atoi(n.c_str());

             cout<<"****************************************************"<<endl;
             cout<<"Enter the type of operation aaccording to the following list."<<endl;
             cout<<"FOR ADDITION ENTER '+' "<<endl;
             cout<<"FOR SUBTRACTION ENTER '-' "<<endl;
             cout<<"FOR MULTIPLICATION ENTER '*' "<<endl;
             cout<<"FOR DIVISION ENTER '/' "<<endl;
             cout<<"FOR LOGARITHM ENTER 'log' "<<endl;
             cout<<"FOR RAISED TO FUNCTION ENTER '^' "<<endl;
             cin>>type;

             if(type=="+" || type=="-" || type=="*" || type=="/" || type=="log" || type=="^")
             {
                Choice(a,b,type);
                z=1;
             }
             else
             {
                throw type;
 
             }
          } 
          else
          {
            throw a;
          } 

        } 

        catch(int p)
        {
            if(p==0)
            {
                cout<<"DIVIDE BY 0 EXCEPTION!!!"<<endl;
            }
            else if(p==1)
            {
                cout<<"LOG(1) EXCEPTION!!!"<<endl;
            }
            else
            {
                cout<<"PLEASE ENTER NUMBERS ONLY!!!"<<endl;
            }
        }
        catch(string q)
        {
            cout<<"OPERATOR EXCEPTION!!!"<<endl;
            cout<<"PLEASE ENTER A VALID OPERATOR PRESENT IN THE LIST!!!"<<endl;
        }

    }while(z!=1);
    
    return 0;    
}
