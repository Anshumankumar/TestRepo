
#include <iostream>
using namespace std;

int main()
{
    int v1=5,v2=10;
    int *p1, *p2;
    p1=&v1;
    p2=&v2;
    cout<<"Before: "<<"v1-"<<*p1<<"   "<<"v2-"<<*p2<<endl;
    *p1=100;
    *p2=*p1;
    p1=p2;
    *p1=200;
    cout<<"After: "<<"v1-"<<*p1<<"   "<<"v2-"<<*p2<<endl;
}
