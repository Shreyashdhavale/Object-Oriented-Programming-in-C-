#include <iostream>
using namespace std;

class complex
{
    int img,real;

    public:

    complex ()
    {
        real=0;
        img=0;
    }
    
    complex (int i, int r)
    {
    	real=r;
    	img=i;
    }

    friend istream &operator >> (istream &i , complex &c);
    friend ostream &operator << (ostream &o, complex &c);

    complex operator + (complex c)
    {
        complex temp;
        temp.real=real+c.real;
        temp.img=img+c.img;
        return temp;
    }
    complex operator - (complex c)
    {
        complex temp;
        temp.real=real-c.real;
        temp.img=img-c.img;
        return temp;
    }
    complex operator * (complex c)
    {
        complex temp;
        temp.real=real*c.real;
        temp.img=img*c.img;
        return temp;
    }
};

istream &operator >> (istream &i , complex &c)
{
    cout<<"Enter the imaginary and real number";
    i>>c.real;
    i>>c.img;
    return i;
}

ostream &operator << (ostream &o, complex &c)
{
    o<<c.real;
    o<<"+"<<c.img<<"j"<<endl;
    return o;
}

int main()
{
    complex c1,c2,c3; 
    int op;

    cin>>c1;
    cout<<c1;
    cin>>c2;
    cout<<c2;
do
{
    cout<<"---------MENU----------"<<endl;
    cout<<"1:ADDITION"<<endl;
    cout<<"2:SUBTRACT"<<endl;
    cout<<"3:MULTIPLICATION"<<endl;
    cout<<"4:Exit"<<endl;
    cout<<"-----------------------"<<endl;
    cout<<"Enter your choice:"<<endl;
    cin>>op;
    
    switch(op)
    
    {
        case 1:
        cout<<"Addition of the complex number is :"<<endl;
        c3=c1+c2;
        cout<<c3;
        break;

        case 2:
        cout<<"Substraction of the complex number is:"<<endl;
        c3=c1-c2;
        cout<<c3;
        break;

        case 3:
        cout<<"Multiplication of the complex number is:"<<endl;
        c3=c1*c2;
        cout<<c3;
        break;
        
    }
}
while(op!=4);
    
    return 0;
}

