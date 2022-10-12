#include <iostream>

using namespace std;

int main()
{ //xl(L)= lower limit, xu=upper limit, xr=root
 //y1(one)=value at xl, y2= value at xu
 // Y3= fun value at iterative root
  int i=1,n;
   float y1,y2,y3,x,xl=0,xu=1,xr;
   cout<<"ENTER NO. OF ITERATION :"<<endl;
   cin>>n;

   x=xl;
   y1=3*x*x+8*x-5;
   cout<<"y1(one) value at xl i.e at lower limit = "<<y1<<endl;
   x=xu;
   y2=3*x*x+8*x-5;
   cout<<"y2 value at xu i.e at upper limit = "<<y2<<endl;

    cout<<" y1(xl)          "<<"y2(xu)          "<<"y3(xr)          "<<"  root xr "<<endl;
   while(i<=n)
   {
       xr=(xl+xu)/2;

       y1=3*xl*xl+8*xl-5;
       y2=3*xu*xu+8*xu-5;
       y3=3*xr*xr+8*xr-5;
    cout<<setwidth(5)y1<<"              "<<y2<<"             "<<y3<<"             "<<"  "<<xr<<endl;
       if(y3==0)
       {
           cout<<"root is "<<xr;
           break;
       }
       if(y1*y3>0)
       {
           xl=xr;
       }
       else if(y1*y3<0)
       {
           xu=xr;
       }
       i++;
   }

  cout<<"final root is "<<xr<<endl;


   return 0;
}
