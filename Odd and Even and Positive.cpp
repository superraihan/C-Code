#include <iostream>
using namespace std;
int main()
{
 int number,reminder;
 number=-10;
reminder = number % 2;

if (number >=0 && reminder ==0)
{
  cout <<"number positive and even";

}
  else
  {
      cout<<"number either odd or negative";
  }

return 0;

}
