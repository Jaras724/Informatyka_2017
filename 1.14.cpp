#include <iostream>

using namespace std;

int main()
{
    double a,b,c,d;
    cout<<"Wprowadz liczby a,b,c oraz d"<<endl;
    cin>>a>>b>>c>>d;
    if (a<5 && b<5 && c<5 && d<5)
        cout<<"Tak"<<endl;
    else
        cout<<"Nie"<<endl;
    return 0;
}
