#include<iostream>
using namespace std;

class job
{
	int course_work;
	int apt_test;
	int tech_test;
	int interview;
    
	public:

	job(int a,int b,int c,int d)
	{
		course_work=a;
		apt_test=b;
		tech_test=c;
		interview=d;
	}

	job(int c,int d)
	{
		course_work=0;
		apt_test=0;
		tech_test=c;
		interview=d;
	}

	job(int z)
	{	
		interview=z;
	}

    void out()
   {
	cout<<"GREAT! YOU CAN APPLY FOR THIS POSITION ."<<endl<<endl;
   }
};

int main()
{
	int a1,a2,a3,a4,a5,a6,a7;
	int total;
	int x;

	cout<<"Enter the designation of the job you are dreaming for "<<endl
                <<endl<<"ENTER THE NUMBERS ACC TO THE DESIGNATIONS: "<<endl
                <<"1 --- PROGRAMMER"<<endl
                <<"2 --- TEAM LEADER"<<endl
                <<"3 --- PROJECT MANAGER"<<endl<<endl;
	            cin>>x;

	if (x==1)
	{
        cout<<endl<<endl;
        cout<<"For Programmer"<<endl;

		cout<<"Enter your course work marks: ";
		cin>>a1;

		cout<<"Enter your aptitude test marks: ";
		cin>>a2;
        
		cout<<"Enter your tech test marks: ";
		cin>>a3;

		cout<<"Enter your interview marks: ";
		cin>>a4;
        
	    job e(a1,a2,a3,a4);

		total=a1+a2+a3+a4;

        cout<<endl<<endl;

		if (total>=80)
		{
	       e.out();
		}
		
		else
		{
			cout<<"TRY AAGIN NEXT TIME!!";
            return 0;
		}

	}

	if (x==2)
	{
        cout<<endl<<endl;
        cout<<"For Team Leader"<<endl;
        
		cout<<"Enter your tech test marks: ";
		cin>>a5;

		cout<<"Enter your interview marks: ";
		cin>>a6;
        
	    job e(a5,a6);

		total=a5+a6;

		if (total>=85)
		{
	       e.out();
		}
		
		else
		{
			cout<<"TRY AAGIN NEXT TIME!!";
            return 0;
		}


	}

	if (x==3)      
	{
        cout<<endl<<endl;
        cout<<"For Project Manager"<<endl;

		cout<<"Enter your interview marks: ";
		cin>>a7;
        
	    job e(a7);

		if (a7>=90)
		{
	       e.out();
		}
		
		else
		{
			cout<<"SORRY ,YOU ARE NOT ELIGIBLE";
            return 0;
		}


	}
	return 0;
}
