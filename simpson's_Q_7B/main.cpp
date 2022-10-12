#include <iostream>
#include<math.h>

using namespace std;

int main()
{   // y0=fun value at lower limit, y1=fun value at upper limit
   //a=lower limit,b= upper limit ,h=step  size
  // yh1= fun value of even no. term , yh2=fun value of odd no. term

  float y0=0,y1=0,a=5,b=15,h;
  float yh1=0,yh2=0;
  int i=1,n;
  float I=0;
  cout<<"Enter no. interval"<<endl;
  cin>>n;
  cout<<endl<<"  ///// SOLUTION BY SIMPSONS'S 1/3 METHOD /////"<<endl;
if (n%2!=0)
{
    cout<<endl<<"ERROR!: 1/3 RULE ONLY VALID FOR EVEN NO. INTERVAL"<<endl;
            exit(0);
}

  h=(b-a)/n;
  cout<<endl<<"step size is                           ="<<h<<endl;
  cout<<"TOtal no. of point at this INTERVAL is  ="<<n+1<<endl;

  y0=4*a*a*a+2*exp(3*a)+5*sin(4*a);
  cout<<"function value at lower limit y0        = "<<y0<<endl;
  y1=4*b*b*b+2*exp(3*b)+5*sin(4*b);
  cout<<"function value at upper limit y1        = "<<y1<<endl;
  cout<<endl;

  h=5;
  while(i<=n-1)
  {
      if (i%2==0)
      {
          h=h+(b-a)/n;
          //TO CHECK THE STEP SIZE IS CORRECT OR NOT USE COUT
         // cout<<"intermediate point for even no. term i.e h=h+(b-a)/n =  "<<h<<endl;
          yh1=yh1 + 4*h*h*h+2*exp(3*h)+5*sin(4*h);
          i++;
      }
      else
      {
          h=h+(b-a)/n;
         //cout<<" intermediate point for odd no. term i.e h=h+(b-a)/n = "<<h<<endl;
          yh2=yh2 + 4*h*h*h+2*exp(3*h)+5*sin(4*h);
          i++;
      }
  }
  yh1=2*yh1;
  yh2=4*yh2;

  cout<<" 2*(Sum of all middle EVEN term is) =    "<<yh1<<endl;
  cout<<" 4*(Sum of all middle ODD term is) =    "<<yh2<<endl;

  // USING THE SIMPSONS'S 1/3 FORMULA

  I=(b-a)*(y0+ yh1+yh2+ y1)/(3*n);

  cout<<endl<<" Final result is I =h*(y0+yh1+yh2+y1)/(3*n) = "<<I<<endl;
    return 0;
}
