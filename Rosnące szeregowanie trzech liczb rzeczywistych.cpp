#include <iostream>

using namespace std;
// Problem: Rosnące szeregowanie trzech liczb rzeczywistych
int main()
{
    double
    a,b,c;
    cout<<"Wprowadz liczby a,b,c"<<endl;
    cin>>a>>b>>c;
    if (a<b && b<c) {
            cout<<"Kolejnosc rosnaca liczb to: "<< a << b << c <<endl;
    }
    if (a<b && b>c && a<c) {
        cout<<"Kolejnosc rosnaca liczb to: "<< a << c << b <<endl;
    }
    if (a<b && b>c && a>c) {
        cout<<"Kolejnosc rosnaca liczb to: "<< c << a << b <<endl;

    }
    if (a>b && a<c) {
        cout <<"Kolejnosc rosnaca liczb to: "<< b << a << c <<endl;

    }
    if (a>b && a>c && b<c) {
        cout <<"Kolejnosc rosnaca liczb to: "<< b << c << a <<endl;
    }
    if (a>b && a>c && b>c) {
        cout <<"Kolejnosc rosnaca liczb to: "<< c << b << a <<endl;
    }
}
