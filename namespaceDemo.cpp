
#include <iostream>
using namespace std;

namespace yup
{
    int x=28;
    char y='c';
}
namespace sup
{
    int x=1;
    int y=5;
}
int main()
{
    using namespace sup;  //first method
    
    cout<<"x in sup :"<<x<<endl;
    cout<<"y in sup :"<<y<<endl;
    cout<<"x in yup :"<<yup::x<<endl; //second method
    using yup::y;  //third method
    y='g';
    cout<<"y in yup :"<<y<<endl;
}
