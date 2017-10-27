#include <iostream>
#include <ctime>
#include <math.h>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main()
{
    int x, p=-5,q=10, y;
    srand(time(NULL));
    x=p+rand()%(q-p+1);

if (x<7) {
    y=pow(x,3)+1;
    } else
{
    switcout<<"Funkcja f(x) wynosi "<<x<<endl;ch(x)
    {
    case 7:
        y=cos(x-1);
    break;
    case 9:
        y=sqrt(3*x);
        break;
        defeult:
            y=-8*x;
            cout<<"Funkcja f(x) wynosi "<<x<<endl;
    }
}


system("pause");
return 0;
}
