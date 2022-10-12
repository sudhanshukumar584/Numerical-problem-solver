#include <iostream>

using namespace std;

int main()
{   // y= function , y2= differentiation of function
    float x=0,y,y2,root;
    int i=1,n;
    cout<<"Enter no. of iteration"<<endl;
    cin>>n;
    y=2*x*x-5*x+8;
    y2=4*x-5;
    cout<<"fun value at x=0 is ="<<y<<endl<<"diff value at x=0 is ="<<y2<<endl;

    if(y2==0)
    {
        cout<<"ERROR!-Y2 IS ZERO"<<endl;
    }
    else while(i<=n)
    {
        x=x-abs((2*x*x-5*x+8))/abs((4*x-5));
        cout<<x<<endl;
        i++;
    }
    cout<<x;

    return 0;
}
