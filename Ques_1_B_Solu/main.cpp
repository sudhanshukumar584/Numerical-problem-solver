#include <iostream>
using namespace std;
int main()
{ // n= no. of object
  // r= no. of object selected
    float n,r,fact1=1,fact2=1,perm=0;
    cout<<"enter the value of n = "<<endl;
    cin>>n;
    cout<<"enter the value of r ="<<endl;
    cin>>r;
    if(n<0)
        cout<<"error"<<endl;
    else
    {
        for(int i=1; i<=n; i++)
        {
            fact1=fact1*i;
        }
    }
   cout<<"fact of n is = "<<fact1<<endl;
    if(n-r<0)
        cout<<"Error= negative no."<<endl;
    else
    {
        for(int i=1; i<=n-r; i++)
        {
            fact2=fact2*i;
        }
        cout<<"fact of (n-r) is = "<<fact2<<endl;

    perm=fact1/fact2;
    cout<<"permutation is = "<<perm<<endl;
    }
 return 0;
}
