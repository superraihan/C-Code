#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  float a,b,c;
  cout<<" Base ";
  cin>>a;
  cout<<" Perpendicular ";
  cin>>b;
  c = (a*a)+(b*b);
  cout<<" Hypotenuse "<<sqrt(c);

  return 0;

}
