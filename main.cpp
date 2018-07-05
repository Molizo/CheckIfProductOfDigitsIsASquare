#include <iostream>

using namespace std;

int main()
{int n,p,s,uc,x,a,ni;
    x=1;
    p=1;
    s=1;
    ni=3;
    cout<<"Introduceti numarul:";
    cin>>n;
    a=n;
    while(n>0)
    {
        uc=n%10;
        s=s*uc;
        n=n/10;
    }
    while(p<=100000)
    {
        if(s==p)
        {
            x=0;
        }
        p=ni+p;
        ni=ni+2;

    }
    if(x==1)
    {
        cout<<endl<<"Produsul cifrelor lui "<<a<<" nu este patrat perfect."<<endl;
    }
    if(x==0)
    {
        cout<<endl<<"Produsul cifrelor lui "<<a<<" este patrat perfect."<<endl;
    }
}
