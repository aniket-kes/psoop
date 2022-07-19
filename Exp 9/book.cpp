#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

class Book
{
private:
	string title;
	string author;
	int year_of_pub;

public:
	Book()
	{
		title="ABC";
		author="XYZ";
		year_of_pub=2003;
	}

	void getter()
	{
		cout<<"Enter the title of the book: "<<endl;
		cin>>title;
		cout<<"Enter the author of the book: "<<endl;
		cin>>author;
		cout<<"Enter the year of publication of the book: "<<endl;
		cin>>year_of_pub;
	}

	void display()
	{
		cout<<"TITLE: "<<title<<endl;
		cout<<"AUTHOR: "<<author<<endl;
		cout<<"YEAR OF PUBLICATION: "<<year_of_pub<<endl;
	}

	string return_title()
	{
		return title;
	}

}b;

int main()
{
	vector <Book> v1;
	string title_1;
	int choice;
	do
	{
		cout<<"*************SELECT*************"<<endl;
		cout<<"1.ADD A BOOK."<<endl;
		cout<<"2.DISPLAY ALL BOOKS."<<endl;
		cout<<"3.SEARCH A BOOK BY ITS TITLE."<<endl;
        cout<<"4.EXIT."<<endl;
		cin>>choice;

		if(choice==1)
		{
			b.getter();
		    v1.push_back(b);
		}

		else if(choice==2)
		{
			vector <Book> :: iterator itr1=v1.begin();
			for(itr1;itr1<v1.end();itr1++)
			{
				itr1->display();
				cout<<"THANKYOU!!!"<<endl;
			}
		}
		else if(choice==3)
		{   
			vector <Book> :: iterator itr1=v1.begin();
            cout<<"ENTER THE TITLE TO BE SEARCHED: "<<endl;
            cin>>title_1;
            for(itr1;itr1<v1.end();itr1++)
            { 
            	if(title_1==itr1->return_title())
            	{
            		cout<<"The book you searched is "<<title_1<<endl;
            	}
            	else
            	{
            		cout<<"SORRY('_') This book is not available."<<endl;
            	}
            }
		}
        else if(choice==4)
            exit;
		else
		{
			cout<<"INVALID NUMBER."<<endl;
		}

	}while(choice==1 || choice==2 || choice==3);

     return 0;
}
