#include <iostream>
#include<math.h>

using namespace std;

int main()
{
  float y0=0,y1=0,yh=0,n,a=5,b=15,h;
  int i=1;
  float I=0;
  cout<<"Enter no. interval"<<endl;
  cin>>n;
  cout<<endl<<"  ///// SOLUTION BY TRAPEZOIDAL METHOD /////"<<endl;
  h=(b-a)/n;
  cout<<endl<<"step size is ="<<h<<endl;

  y0=4*a*a*a+2*exp(3*a)+5*sin(4*a);
  cout<<"function value at lower limit= "<<y0<<endl;
  y1=4*b*b*b+2*exp(3*b)+5*sin(4*n);

  cout<<"function value at upper limit= "<<y1<<endl;
  cout<<endl;


  cout<<" Intermediate point is  "<<" Fun value at intermediate point "<<endl;
  h=5;
  while(i<=n-1)
  {
      h=h+(b-a)/n;
      cout<<"    "<<h;
      yh=(yh+ 4*h*h*h+2*exp(3*h)+5*sin(4*h));
      cout<<"                           "<<yh<<endl;
      i++;
  }

  yh=2*yh; cout<<endl;
  cout<<" 2*(Sum of all middle term is) =    "<<yh<<endl;

  I=(b-a)*(y0+yh+y1)/(2*n);

  cout<<endl<<" Final result is = "<<I<<endl;
    return 0;
}
