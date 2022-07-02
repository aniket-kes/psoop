#include <iostream>
using namespace std;
class population
{
public:
    int popu[100], n1;
    float br, dr;

    population(int p, float b, float d, int n)
    {
        popu[1] = p;
        br = b;
        dr = d;
        n1 = n;
    }

    void growthrate()
    {
        cout << "Growth rate is given by: " << br - dr << endl;
    }

    void estipopu()
    {
        for (int i = 1; i <= n1; i++)
        {
            popu[i + 1] = popu[i] + (br * popu[i] / 100) - (dr * popu[i] / 100);
            cout << "The population after " << i << " years: " << popu[i + 1] << endl;
        }
    }
};
int main()
{
    int p, n;
    float b, d;
    cout << "Enter the population: ";
    cin >> p;
    cout << "Enter the birth rate: ";
    cin >> b;
    cout << "Enter the death rate: ";
    cin >> d;
    cout << "Enter the no.of years: ";
    cin >> n;

    population p1(p, b, d, n);

    p1.estipopu();
    p1.growthrate();
}
