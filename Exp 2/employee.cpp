#include <iostream>
using namespace std;
class Employee
{
public:
    string name[100], temp1;
    int age[100], temp, temp2;
    float salary[100];
    Employee()
    {
        name[0] = "unknown";
        age[0] = 18;
        salary[0] = 20000;
    }
    void setter(int n)
    {
        for (int i = 1; i < n; i++)
        {
            cout << endl;
            cout << "Enter the name of employee" << i << ": ";
            cin >> name[i];
            cout << "Enter the age of employee" << i << ": ";
            cin >> age[i];
            cout << "Enter the salary of employee" << i << ": ";
            cin >> salary[i];
        }
        cout << endl;
    }

    void arrange(int n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (age[i] > age[j])
                {
                    temp = age[i];
                    age[i] = age[j];
                    age[j] = temp;

                    temp1 = name[i];
                    name[i] = name[j];
                    name[j] = temp1;

                    temp2 = salary[i];
                    salary[i] = salary[j];
                    salary[j] = temp2;
                }
            }
        }
    }
    void getter(int n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << "The name of employee" << i << ": " << name[i] << endl;
            cout << "The age of employee" << i << ": " << age[i] << endl;
            cout << "The salary of employee" << i << ": " << salary[i] << endl;
            cout << endl;
        }
    }
};
int main()
{
    int n;
    cout << "Enter the numbers of employee:";
    cin >> n;
    Employee e1;
    e1.setter(n);
    e1.arrange(n);
    e1.getter(n);

    return 0;
}
