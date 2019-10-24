//---------------------------------------------------------------------------

#include <vcl.h>
#include <iostream.h>
#include <math.h>
#include <conio.h>
#pragma hdrstop
using namespace std;

//---------------------------------------------------------------------------

#pragma argsused
/*int fact(int i)
{
 if (i==0) return i;
  else return i*fact(i-1);
  }*/
int main(int argc, char* argv[])
{
  double x,y,s_a,s,p,m,z,r,a=0.1, b=1.0, h=0.1;
  cout<<"counting sum for x from 0.1 to 1 witgh step 0.1 using formula..."
  <<endl;
  cout<<"set range from 1 to n ..."<<endl<<endl;
  int n,k;
  cin>>n;
  cout<<endl;
   cout<<"press any key to continue ..."<<endl;
   getch();
   for(x=a;x<=b;x+=h) //первый цикл для X
{
  y=x*atan(x)-log(sqrt(1+x*x));
   s_a=0;
   cout<<"with x = "<<x<<"   "<<"y = "<<y<<"  "<<"S(x)= ";
    for(k=1;k<=n;k++) //второй цикл для R
{
 m=k+1;
 z=2*k;
 s=pow((-1),m)*(pow(x,z))/(z*(z-1));
   s_a += s;
 }
 cout<<s_a<<"    ";
  p=y-s_a;
    p= fabs(p);
       cout<<"module = "<<p<<endl;
       }
       getch();
return 0;
}
//---------------------------------------------------------------------------
