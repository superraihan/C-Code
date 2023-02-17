#include <iostream>
using namespace std;
int main()
{

  int year;
  cout<<" Enter A Year ";
  cin>>year;

//Check if the year is leap year

 if ((year % 4 == 0 && year % 100 != 0 )|| year % 400 == 0)
 {
     cout<<" is a leap year ";

 }
  else
  {
      cout<<" is not a leap year";

  }

 return 0;

}


