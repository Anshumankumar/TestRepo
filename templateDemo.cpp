
#include <iostream>
using namespace std;

template <class T>
T compare(T a,T b)
{
    if(a>b)
    cout<<a<<" is bigger"<<endl;
    else
    cout<<b<<" is bigger"<<endl;
}
int main()
{
    int x=2,y=3;
    double a=3.4, b=1.2;
    char p='d',q='a';
    compare<int>(x,y);
    compare<double>(a,b);
    compare<char>(p,q);
}
