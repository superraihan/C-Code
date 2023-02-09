#include <iostream>
using namespace std;
int main()
{
  float x;
  int y;
  cout<<" Enter Your CGPA ";
  cin>>x;
  cout<<" Enter Your Credit Number ";
  cin>>y;
  if(x>=3.75 && y>=18)
  {
      cout<<" You Got Scholarship ";

  }

    else
    {
        cout<<" You Are Not Able To Get Scholarship ";
    }

    return 0;

}
