#include <iostream>

using namespace std;

int main()
{
    double a,b,c,d,najmniejsza;
    cout<<"Podaj liczby a,b,c,d: "<<endl;
    cin>>a>>b>>c>>d;
    najmniejsza=a;
    if (b<najmniejsza) {
        najmniejsza=b;
    }

    if (c<najmniejsza) {
        najmniejsza=c;
    }
    if (d<najmniejsza) {
        najmniejsza=d;
    }
    cout<<"Najmniejsza liczba wynosi: "<<najmniejsza<<endl;
    return 0;
}
