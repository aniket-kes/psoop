#include<iostream>
#include<map>
#include<string>
using namespace std;
typedef map<string,int> movie;

int main()
{
    int count1=0;
    int count2=0;
    int count3=0;
    int count4=0;
    string movie_name,movie_1,movie_2,movie_3,movie_4;
    int tot_votes;
    movie m1;
    cout<<"THE FOLLOWING MOVIES HAVE BEEN SELECTED FOR THE AWARD OF THE BEST MOVIE.PLEASE CAST YOUR VOTE ACCORDING TO THE FOLLOWING LIST."<<endl;
    cout<<"Harry_Potter_and_the_Order_of_the_Phoenix"<<endl;
    cout<<"The_Bourne_Ultimatum"<<endl;
    cout<<"Glitter"<<endl;
    cout<<"Wall_E"<<endl;
    
    cout<<"------------------------------------------------------------"<<endl;
    cout<<"Enter the total number of votes: "<<endl;
    cin>>tot_votes;

    cout<<"************************************************************"<<endl;
    cout<<"Enter the name of the movies:"<<endl;
    for(int i=0;i<tot_votes;i++)
    {
        cin>>movie_name;
        if(movie_name=="Harry_Potter_and_the_Order_of_the_Phoenix")
        {
            count1++;
            movie_1="Harry_Potter_and_the_Order_of_the_Phoenix";

        }
        else if(movie_name=="The_Bourne_Ultimatum")
        {
            count2++;
            movie_2="The_Bourne_Ultimatum";
        }
        else if(movie_name=="Wall_E")
        {
            count3++;
            movie_3="Wall_E";
        }
        else if(movie_name=="Glitter")
        {
            count4++;
            movie_4="Glitter";
        }
        else
        {
            cout<<"PLEASE VOTE ACCORDING TO THE GIVEN LIST."<<endl;
        }
        
    }

    m1[movie_1]=count1;
    m1[movie_2]=count2;
    m1[movie_3]=count3;
    m1[movie_4]=count4;

    cout<<"**************************************************"<<endl;
    cout<<"THE VOTES ARE BEING CALCULATED!!!"<<endl;
    movie:: iterator itr1=m1.begin();
    for(itr1;itr1!=m1.end();itr1++)
    {   
        cout<<itr1->first<<" "<<itr1->second<<endl;
    }
    
    m1.clear(); 
    cout<<"------------------------------------------------------"<<endl;
    cout<<"BEST MOVIE IS: ";
    if(count1>count2 && count1>count3 && count1>count4)
    {
        m1[movie_1]=count1;
        movie:: iterator itr1=m1.begin();
        for(itr1;itr1!=m1.end();itr1++)
      {   
        cout<<itr1->first<<" with "<<itr1->second<<" votes."<<endl;
      }
    }
    else if(count2>count1 && count2>count3 && count2>count4)
    {
        m1[movie_2]=count2;
        movie:: iterator itr1=m1.begin();
        for(itr1;itr1!=m1.end();itr1++)
      {   
        cout<<itr1->first<<" with "<<itr1->second<<" votes. "<<endl;
      }
    }
    else if(count3>count1 && count3>count2 && count3>count4)
    {
        m1[movie_3]=count3;
        movie:: iterator itr1=m1.begin();
        for(itr1;itr1!=m1.end();itr1++)
      {   
        cout<<itr1->first<<" with "<<itr1->second<<" votes. "<<endl;
      }
    }
    else if(count4>count1 && count4>count2 && count4>count3)
    {
        m1[movie_4]=count4;
        movie:: iterator itr1=m1.begin();
        for(itr1;itr1!=m1.end();itr1++)
      {   
        cout<<itr1->first<<" with "<<itr1->second<<" votes. "<<endl;
      }
    }
    else
    {
        cout<<"THERE IS NO WINNER."<<endl;
    }
    return 0;
}
