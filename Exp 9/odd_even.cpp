#include <bits/stdc++.h>
#include <iostream>
#include <list>
#include <vector>
using namespace std;
void Merge_odd_even(int[], int, list<int>, int);
int main()
{
    int n;
    cout << "Enter Number of even Entries: ";
    cin >> n;
    int even_num[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Number " << i + 1 << ": ";
        cin >> even_num[i];
        if (even_num[i] % 2 != 0)
        {
            cout << "Error. Please Enter EVEN number.\n";
            i--;
        }
    }
    sort(even_num, even_num + n);
    for (int i = 0; i < n; i++)
    {
        cout << even_num[i] << " ";
    }
    int m;
    cout << "\nEnter Number of Odd Entries: ";
    cin >> m;
    list<int> odd_num;
    for (int i = 0; i < m; i++)
    {
        int x;
        cout << "Number " << i + 1 << ": ";
        cin >> x;
        if (x % 2 == 0)
        {
            cout << "Error. Please Enter ODD number.\n";
            i--;
        }
        else
        {
            odd_num.push_back(x);
        }
    }
    odd_num.sort();
    for (int x : odd_num)
    {
        cout << x << " ";
    }
    cout << endl;
    Merge_odd_even(even_num, n, odd_num, m);
    return 0;
}
void Merge_odd_even(int even_num[], int n, list<int> odd_num, int m)
{
    vector<int> odd_even_numbers;
    list<int>::iterator it_n;
    it_n = odd_num.begin();
    int a = 0;
    for (int i = 0; i < (m + n); i++)
    {
        if (it_n == odd_num.end())
        {
            for (int i = a; i < n; i++)
            {
                odd_even_numbers.push_back(even_num[i]);
            }
            break;
        }
        else if (a == n)
        {
            for (it_n; it_n != odd_num.end(); it_n++)
            {
                odd_even_numbers.push_back((*it_n));
            }
            break;
        }
        else if (even_num[a] <= (*it_n))
        {
            odd_even_numbers.push_back(even_num[a]);
            a++;
        }
        else if (even_num[a] > (*it_n))
        {
            odd_even_numbers.push_back((*it_n));
            it_n++;
        }
    }
    for (auto p = odd_even_numbers.begin(); p < odd_even_numbers.end(); p++)
    {
        cout << *p << " ";
    }
}
