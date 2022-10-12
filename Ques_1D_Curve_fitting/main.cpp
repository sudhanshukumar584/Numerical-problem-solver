#include <iostream>
#include<cmath>

using namespace std;

int main()
{ int n;

cout<<"enter the no. of data n="<<endl;  // no. of element
cin>>n;

float x[n],y[n],a,b;
cout<<"enter the data of x"<<endl;
for(int i=0;i<n; i++)                   // input of x vlaue from keyboard
{
    cin>>x[i];
}
cout<<"enter the value of y"<<endl;
for(int i=0;i<n; i++)                   // input of y value from keyboard
{
    cin>>y[i];
}

float sumx=0,sumy=0,sumx2=0,sumxy=0;
for(int i=0;i<n;i++)
{
    sumx=sumx+x[i];                   // summation of x value
    sumy=sumy+y[i];                    // summation of y value
    sumx2=sumx2+x[i]*x[i];             //summation of x2 value
    sumxy=sumxy+x[i]*y[i];            //summation of x*y value
}
    cout<<"sum of x is ="<<sumx<<endl;
    cout<<"sum of y is ="<<sumy<<endl;
    cout<<"sum of x2 is ="<<sumx2<<endl;
    cout<<"sum of xy is ="<<sumxy<<endl;

    a=(sumy*sumx2-sumx*sumxy)/(n*sumx2-sumx*sumx);  // calculation of fitting constant
    b=(n*sumxy-sumx*sumy)/(n*sumx2-sumx*sumx);      // calculation of slope
    cout<<"constant a is ="<<a<<endl;
    cout<<"constant b is ="<<b<<endl;
    cout<<endl;
    cout<<"fitting curve equation is ="<<endl;
    cout<<" y= "<<a<<" + "<<b<<"x";

    return 0;
}
