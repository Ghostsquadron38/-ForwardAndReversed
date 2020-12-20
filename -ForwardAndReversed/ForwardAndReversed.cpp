#include <iostream>

using namespace std;

int main()
{
    int a,b,c,t;
    cout << "Input the first value: "; cin>>a;
    cout << "Input the second value: "; cin>>b;
    cout << "Input the third value: "; cin>>c;
    if (a>b)
        {t=a; a=b; b=t;}
    if (a>c)
        {t=a; a=c; c=t;}
    if (b>c)
        {t=b; b=c; c=t;}
    cout<<endl;
    cout<<"Forward order: "<<" "<<c<<" "<<b<<" "<<a<<endl;
    cout<<"Backward order: "<<" "<<a<<" "<<b<<" "<<c<<endl;
    return 0;
}
