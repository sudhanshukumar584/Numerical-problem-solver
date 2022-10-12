#include <iostream>

using namespace std;

int main()
{
  float y0=0,y1=0,yh=0,n,a=0,b=8,h;
  int i=1;
  float I=0;
  cout<<"Enter no. interval"<<endl;
  cin>>n;
  cout<<endl<<"  ///// SOLUTION BY TRAPEZOIDAL METHOD /////"<<endl;
  h=(b-a)/n;
  cout<<endl<<"step size is                             ="<<h<<endl;
  cout<<"TOtal no. of point at this step size is ="<<n+1<<endl;

  y0=2*a*a+5*a-6;
  cout<<"function value at lower limit y0 =0       = "<<y0<<endl;
  y1=2*b*b+5*b-6;

  cout<<"function value at upper limit y1 =8       = "<<y1<<endl;
  cout<<endl;


  cout<<" Intermediate point is  "<<" sum of intermediate fun value "<<endl;
  h=0;
  while(i<=n-1)
  {
      h=h+(b-a)/n;
      cout<<"    "<<h;
      yh=(yh+2*h*h+5*h-6);  // sum of intermediate fun value
      cout<<"                           "<<yh<<endl;
      i++;
  }

  yh=2*yh; cout<<endl;
  cout<<" 2*(Sum of all middle term is) =    "<<yh<<endl;

  // USING THE TRAPEZOIDAL FORMULA

  I=(b-a)*(y0+yh+y1)/(2*n);

  cout<<endl<<" Final result is I =h*(y0+yh+y1)/2 = "<<I<<endl;
    return 0;
}
