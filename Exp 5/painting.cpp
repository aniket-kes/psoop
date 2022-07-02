#include <iostream>
#include <string.h>

using namespace std;
class painting
{
    string title;
    int value;
    string artist_name;

public:
    void show(string title1, string artist_name1)
    {
        title = title1;
        artist_name = artist_name1;
        cout << "TITLE: " << title << endl;
        cout << "VALUE: 400$" << endl;
        cout << "ARTIST NAME: " << artist_name << endl;
    }
};

class FamousPainting : public painting
{
    int value = 25000;
    string title2;
    int value2;
    string artist_name2;

public:
    void show1(string title1, string artist_name1)
    {
        title2 = title1;
        // value2=value1;
        artist_name2 = artist_name1;

        if (artist_name2 == "degas" || artist_name2 == "monet" || artist_name2 == "picasso" || artist_name2 == "rembrandt")
        {
            cout << "TITLE: " << title2 << endl;
            cout << "VALUE: 25000$" << endl;
            cout << "ARTIST NAME: " << artist_name2 << endl;
        }

        else
        {
            show(title2, artist_name2);
        }
    }

} a;

int main()
{
    for (int i = 0; i < 10; i++)
    {
        string title;
        string artist_name;
        cout << "Enter the title of the painting: ";
        cin >> title;
        cout << "Enter the name of the artist of the painting : ";
        cin >> artist_name;

        a.show1(title, artist_name);
    }

    return 0;
}
