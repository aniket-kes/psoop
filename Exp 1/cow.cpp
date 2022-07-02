#include<iostream>
using namespace std;

class cow{
    
    public:

    int id;
    char name[100];
    char dob[100];
    char dob_calving[100];
    float milk_produce;

public: 

   int a=0; 
   float getdata(float total);
   
   void display_all_data();

   void milk_production();
   
};

float cow ::   getdata(float total)
{
    cout<<"Enter the id of the cow: ";
    cin>>id;

    cout<<"Enter the name of the cow: ";
    cin>>name;
    
    cout<<"Enter the DOB of the cow: ";
    cin>>dob;

    cout<<"Enter the date of recent calving: ";
    cin>>dob_calving;

    cout<<"Enetr the production of milk in litres: ";
    cin>>milk_produce;
    
    total = total + milk_produce;
    return total;
    
}

void cow ::   display_all_data()
{
    cout<<"The id of the cow is: "<<id<<endl;
    cout<<"The name of the cow is: "<<name<<endl;
    cout<<"The DOB of the cow is: "<<dob<<endl;
    cout<<"The date of recent calving is : "<<dob_calving<<endl;
    cout<<"THe milk produce is: "<<milk_produce<<endl;

}


int main(){
    
    int n;
    float total,average;
    cout<<"Enter the number of cows: ";
    cin>>n;
     cow c1[n];

     for (int  i = 0; i <n; i++)
     {
        total=c1[i].getdata(total);
        cout<<"-----------------------------------------------------"<<endl;
     }
     
     for (int  i = 0; i <n; i++)
     {
        c1[i].display_all_data();
        cout<<"-----------------------------------------------------"<<endl;
     }
     
    cout<<"The total milk production is: "<<total<<endl;
    average=(total)/n;
    cout<<"The avereage milk produced by the cows is: "<<average<<endl;
    
       
    int s;
 cout<<endl<<"Do you want to reset the milk production to zero (type '1' for YES or '0' for NO): ";
    cin>>s;

    if (s==1)
    {
        total=0;
        cout<<"Total milk production has been reset to zero";

    }

    else if (s==0)
    {
        cout<<"milk production has not been Reset";
    }
    
return 0;
}
