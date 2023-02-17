#include <iostream>
using namespace std;
int main ()
{
 char gender;
 cout<<" Enter Gender (M/m for Male,F/f for femle) ";
 cin>>gender;

 switch(gender)
 {
  case 'M':
  case 'm':

  cout<<"Gender is Male";
  break;

  case 'F':
  case 'f':

  cout<<"Gender is Female";
  break;

  default:
  cout<<"Undefined";
  break;
 }

  return 0;

 }
