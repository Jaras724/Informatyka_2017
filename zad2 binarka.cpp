#include <iostream>

using namespace std;

int main()
{
    int ip, ip2, ip3, ip4; string bin="", bin1, bin2, bin3, bin4;

    cout<<"Instrukcja:"<<endl;
    cout<<"W celu poprawnego dzialania programu, wprowadz kolejno cztery czlony adresu IP - kazdy czlon musisz oddzielic klawiszem ENTER."<<endl;
    cout<<"Przyklad:"<<endl;
        cout<<"192"<<endl;
        cout<<"168"<<endl;
            cout<<"1"<<endl;
            cout<<"1"<<endl;
            cout<<"!!NIE WPROWADZAJ KROPEK!!"<<endl;
            cout<<"Nastepnie wprowadzony przez Ciebie adres IP zostanie przeliczony na system binarny"<<endl;
            cout<<"Zaczynajmy!"<<endl;
            cout<<endl;
cout << "Podaj adres IP:" << endl;

    cin>>ip>>ip2>>ip3>>ip4;
    cout<<"Podany przez Ciebie adres IP to: "<<ip<<"."<<ip2<<"."<<ip3<<"."<<ip4<<endl<<endl;

bin="0";
    while(ip!=0)
    {
    if (ip%2==0){
        bin="0"+bin;
    }
    else
    {
        bin="1"+bin;}
        ip=ip/2;
    bin1=bin;
    };
    bin="0";
{
 while(ip2!=0)
    {
    if (ip2%2==0){
        bin="0"+bin;
    }
    else
    {
        bin="1"+bin;}
        ip2=ip2/2;
    bin2=bin;
    };
    bin="0";
    {


     while(ip3!=0)
    {
    if (ip3%2==0){
        bin="0"+bin;
    }
    else
    {
        bin="1"+bin;}
        ip3=ip3/2;
    bin3=bin;
    }};
    bin="0";{
     while(ip4!=0)
    {
    if (ip4%2==0){
        bin="0"+bin;
    }
    else
    {
        bin="1"+bin;}
        ip4=ip4/2;
    bin4=bin;
    }};
    bin="0";
}
    cout<<"Liczba ta w przeliczeniu na system binarny wynosi: "<<endl<<bin1<<"."<<bin2<<"."<<bin3<<"."<<bin4;
    }













