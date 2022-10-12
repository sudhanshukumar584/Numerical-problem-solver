#include <iostream>
#include<math.h>

using namespace std;

int main()
{
  float y0=0,y1=0,yh=0,n,a=0,b=22/7.0,h;
  int i=1;
  float I=0;
  cout<<"Enter no. interval"<<endl;
  cin>>n;
  cout<<endl<<"  ///// SOLUTION BY TRAPEZOIDAL METHOD /////"<<endl;
  h=(b-a)/n;
  cout<<endl<<"step size is ="<<h<<endl;

  y0=3*cos(2*a)+4*sin(5*a);
  cout<<"function value at lower limit= "<<y0<<endl;
  y1=3*cos(2*b)+4*sin(5*b);

  cout<<"function value at upper limit= "<<y1<<endl;
  cout<<endl;


  cout<<" Intermediate point is  "<<" Fun value at intermediate point "<<endl;
  h=0;
  while(i<=n-1)
  {
      h=h+(b-a)/n;
      cout<<"    "<<h;
      yh=(yh+ 3*cos(2*h)+4*sin(5*h));
      cout<<"                           "<<yh<<endl;
      i++;
  }

  yh=2*yh; cout<<endl;
  cout<<" 2*(Sum of all middle term is) =    "<<yh<<endl;

  I=(b-a)*(y0+yh+y1)/(2*n);

  cout<<endl<<" Final result is = "<<I<<endl;
    return 0;
}
