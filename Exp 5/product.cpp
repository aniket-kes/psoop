#include <iostream>
using namespace std;
class Product
{
    int barcode;
    string name;

public:
    Product()
    {
        barcode = 10000;
        name = "PRODUCT";
    }
    virtual void scanner()
    {
        cout << "Enter barcode: ";
        cin >> barcode;
        cout << "Enter name of product: ";
        cin >> name;
    }
    virtual void printer()
    {
        cout << "Barcode: " << barcode << endl;
        cout << "Name of product: " << name << endl;
    }
};
class PrepackedFood : public Product
{
    int unitPrice;

public:
    void scanner()
    {
        Product::scanner();
        cout << "Enter unit price: ";
        cin >> unitPrice;
    }
    void printer()
    {
        Product::printer();
        cout << "Unit price: " << unitPrice << endl;
    }
};
class FreshFood : public Product
{
    int weight;
    int price_per_kg;

public:
    void scanner()
    {
        Product::scanner();
        cout << "Enter weight: ";
        cin >> weight;
        cout << "Enter price per kg: ";
        cin >> price_per_kg;
    }
    void printer()
    {
        Product::printer();
        cout << "Weight: " << weight << endl;
        cout << "Price per kg: " << price_per_kg << endl;
    }
};
int main()
{
    PrepackedFood P1;
    FreshFood P2;

    Product *ptr[2];
    ptr[0]=&P1;
    ptr[1]=&P2;

    cout << "For prepacked food\n";
    ptr[0]->scanner();
    cout << "For fresh food\n";
    ptr[1]->scanner();

    cout << "\n";
    cout << "Information of products: \n";
    cout << "\n";
    cout << "------Prepacked Food------ \n";
    ptr[0]->printer();
    cout << "\n";
    cout << "--------Fresh Food-------- \n";
    ptr[1]->printer();

    return 0;
}
