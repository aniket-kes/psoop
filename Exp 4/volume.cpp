#include <iostream>
using namespace std;

class shapes
{
private:
    float l, b, h;

public:
    
    void volume(float l)
    {
        float total = l * l * l;
        cout << "Volume of cube is: " << total << endl;
    }
    void volume(float l, float b, float h)
    {
        float total = l * b * h;
        cout << "Volume of cuboid is: " << total << endl;
    }
    void volume(float l, float h)
    {
        float total = (3.14 * l * l * h) / 3;
        cout << "Volume of cone is: " << total << endl;
    }
};
int main()
{
    shapes c1;
    int x;
    float s1, s2, s3;
    cout << "Enter the shape for finding volume." << endl
         << endl
         << "1-Cube" << endl
         << "2-Cuboid" << endl
         << "3-Cone" << endl;
    cin >> x;
    if (x == 1)
    {
        cout << "Enter the Side of cube: ";
        cin >> s1;
        c1.volume(s1);
    }
    else if (x == 2)
    {
        cout << "Enter the length, breadth and height of cuboid.";
        cin >> s1;
        cin >> s2;
        cin >> s3;
        c1.volume(s1, s2, s3);
    }
    else if (x == 3)
    {
        cout << "Enter the radius and height of cone.";
        cin >> s1;
        cin >> s3;
        c1.volume(s1, s3);
    }
    return 0;
}
