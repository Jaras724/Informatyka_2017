#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double
    a, b, c, delta, x, x1, x2;
    cout<< "Uprzejmie prosze o wprowadzenie nastepujaco po sobie liczb a, b oraz c."<<endl;
    cin>>a>>b>>c;
    if (a==0) {cout<< "Bardzo mi przykro, ale to nie jest rownanie kwadratowe :("<<endl;
    } else {
        delta=b*b-4*a*c;


        if (delta<0) { cout<<"Bardzo mi przykro, ale to rownanie nie ma pierwiastkow :("<<endl;
    } else {

        if (delta==0) {
        (x=-b/(2*a));
    cout<<"X wynosi: " <<x<< endl; }
    else {
        (x1=(-b-sqrt(delta))/(2*a));
        (x2=(-b+sqrt(delta))/(2*a));
        cout <<"x1 wynosi: "<<x1<<endl;
        cout <<"x2 wynosi: "<<x2<<endl;
}
}
    }
}
