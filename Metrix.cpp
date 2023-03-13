#include <iostream>
using namespace std;
int main()
{
  int arr[3][2];
  cout<<"1st Number:";
  cin>>arr[0][0];
  cout<<"2nd Number:";
  cin>>arr[0][1];
  cout<<"3rd Number:";
  cin>>arr[1][0];
  cout<<"4th Number:";
  cin>>arr[1][1];
  cout<<"5th Number:";
  cin>>arr[2][0];
  cout<<"6th Number:";
  cin>>arr[2][1];

  for(int i=0;i<3;i++)
  {
    for(int j=0;j<2;j++)
    {
        cout<<"\ "<<arr[i][j];
    }
     cout<<endl;
    }

}

