#include <iostream>

using namespace std;

int main()
{
    int x,y,z;
    cout<<"Wprowad� liczby x, y oraz z"<<endl;
    cin>>x>>y>>z;
    if (x%2==0 && y%2==0 && z%2==0)
        cout<<"Nie"<<endl;
    else
        cout<<"Tak"<<endl;
    return 0;
}
