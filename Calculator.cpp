#include <iostream>
using namespace std;
int main()
{
    char operation;
    float num1,num2;
    cout<<"use + for addition"<<endl;
    cout<<"use - for subtraction"<<endl;
    cout<<"use * for multiplication"<<endl;
    cout<<"use / for division"<<endl;
    cout<<" Enter numbers and operation: ";
    cin>>num1>>operation>>num2;

    switch(operation)
    {
   case'+':
    cout<<"addition:"<<num1 + num2;
    break;

   case'-':
    cout<<"subtraction:"<<num1 - num2;
    break;

   case'*':
    cout<<"multiplication:"<<num1 * num2;
    break;

    case'/':
    cout<<"division:"<<num1 / num2;
    break;

    cout<<"Error"<<endl;
    }
    return 0;


}

