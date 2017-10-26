#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    {


    double
    x;
cout<<"Podaj x"<<endl;
cin>>x;

if (x<1)
    cout<<(2*x)<<endl;
else
    if (x==1)
    cout<<-10<<endl;
else
    if (x==3)
    cout<<((x-1)*(x-1)*(x-1)*(x-1))<<endl;
else
    if (x==6)
    cout<<(sqrt(x-4))<<endl;
else
    cout<<0<<endl;
}
return 0;
}
