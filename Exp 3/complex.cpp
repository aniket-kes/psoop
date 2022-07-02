#include<iostream>
using namespace std;

class complex
{
    private:
        int real, imaginary;
    public:
        complex()
        {
            real=0;
            imaginary=0;
        }
        complex(int a){
            real = a;
            imaginary = a;
        }
        complex(int b, int c){
            real=b;
            imaginary=c;
        }

        void addition(complex c1, complex c2){
            real=c1.real+c2.real;
            imaginary=c1.imaginary+c2.imaginary;
        }

        void display(){
            cout<<real<<" + "<<imaginary<<"i"<<endl;
        }
};
int main()
{
    int real , imaginary;
    cout<<"Enter the real part"<<endl;
    cin>>real;
    complex c1(real);
    
    cout<<"Enter real and imaginary different values"<<endl;
    cin>>real>>imaginary;
    complex c2(real,imaginary);


    complex c3;
    cout<<"The addition of complex number is:"<<endl;
    c3.addition(c2,c1);
    c3.display();

    return 0;
}
