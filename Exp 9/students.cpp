#include<iostream>
#include<list>
using namespace std;
class Student
{
    protected:
    string f_name;
    int roll_num;
    
    public:
    Student()
    {
        f_name="XYZ";
        roll_num=1234;
    }
    
    void get_Data()
    {
        cout<<"Enter the first name of the student: "<<endl;
        cin>>f_name;
        
        cout<<"Enter the roll number of the student: "<<endl;
        cin>>roll_num;
    }
    
    string return_name()
    {
        return f_name;
    }
    int return_roll_num()
    {
        return roll_num;
    }
    
}a,b,c,d,e;

int main()
{
    int roll_num1,choice;
    string f_name1;
    list<Student> list1;
    a.get_Data();
    b.get_Data();
    c.get_Data();
    d.get_Data();
    e.get_Data();
    
    list1.push_back(a);
    list1.push_back(b);
    list1.push_back(c);
    list1.push_back(d);
    list1.push_back(e);
    
    list<Student> :: iterator itr1;
    itr1=list1.begin();

    do
    {
        cout<<"Enter the mode of searching the student."<<endl;
        cout<<"1)BY ROLL NUMBER"<<endl;
        cout<<"2)BY STUDENT NAME"<<endl
            <<"3)Exit."<<endl;
        cin>>choice;

        if(choice==1)
        {
            cout<<"Enter the Roll number of the student to be searched: "<<endl;
            cin>>roll_num1;
        
            for(itr1;itr1!=list1.end();itr1++)
            {
            if(roll_num1==itr1->return_roll_num())
            {
                cout<<"THE STUDENT IS "<<itr1->return_name()<<endl;
                }
            }
        
        }
        else if(choice==2)
        {
            cout<<"Enter the first name of the student to be searched: "<<endl;
            cin>>f_name1;
            for(itr1;itr1!=list1.end();itr1++)
            {
            if(f_name1==itr1->return_name())
            {
                cout<<"THE ROLL NUMBER OF THE STUDENT IS "<<itr1->return_roll_num()<<endl;
                }
            }
            
        }
        else if(choice==3)
            exit;
        else
        {
        cout<<"PLEASE SELECT A VALID SEARCH METHOD."<<endl; 
        }
    }while (choice==1||choice==2);
    
    
    return 0;
}
