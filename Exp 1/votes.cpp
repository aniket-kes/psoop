#include <iostream>
#include <string.h>
using namespace std;

class candidates
{
  char name[20];
  int no_of_votes;
  static int total, max;
  static char a[20];

public:
  int setdata();

  void printdata();
  void winner();

} c[3];

int candidates ::total;
int candidates ::max;
char candidates ::a[20];

int candidates ::setdata()
{

  cout << "Enter the name of the candidate: ";
  cin >> name;
  cout << "Enter the no of votes recieved by the candidate: ";
  cin >> no_of_votes;
  cout << "----------------------------------------------------------" << endl;
  total = total + no_of_votes;

  if (no_of_votes > max)
  {
    max = no_of_votes;
    strcpy(a, name);
  }
  return total;
}

void candidates ::printdata()
{
  cout << "----------------------------------------------------------" << endl;
  cout << "Name of the candidate : " << name << endl;
  cout << "No of votes recieved: " << no_of_votes << endl;
  cout << "Percentage of votes recieved = " << ((float)no_of_votes / (float)total) * 100 << endl;
}

void candidates ::winner()
{
  cout << endl;
  cout << endl;
  cout << endl;
  cout << "<><><><><><><><><><><><><><><><><><><><><><><><><><>" << endl;
  cout << endl;
  cout << endl;
  cout << "AND THE WINNER IS :  " << a;
  cout << endl;
  cout << endl;
  cout << "<><><><><><><><><><><><><><><><><><><><><><><><><><>" << endl;
  cout << endl;
}

int main()
{

  // candidates c[5];

  for (int i = 0; i < 5; i++)
  {
    c[i].setdata();
  }

  for (int i = 0; i < 5; i++)
  {
    c[i].printdata();
  }

  c[0].winner();

  return 0;
}
