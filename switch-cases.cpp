#include <iostream>

using namespace std;

int main()
{
//Program to make a simple calculator by using switch cases
int num1,num2;
char operends;
cout<<"enter two numbers"<<endl;
cin>>num1>>num2;
cout<<"enter the operand"<<endl;
cin>>operends;

switch(operends){
case '+':
    cout<<num1<<"+"<<num2<<"="<<num1+num2<<endl;
    break;
    case '*':
        cout<<num1<<"*"<<num2<<"="<<num1*num2<<endl;
        break;
    case '-':
        cout<<num1<<"-"<<num2<<"="<<num1-num2<<endl;
        break;
    case '/':
        cout<<num1<<"/"<<num2<<"="<<num1/num2<<endl;
    default:
        cout<<"is invalid"<<endl;


    }
//program to check the months of same days using cases statemets:
int month;

cout<<"enter the month "<<endl;
cin>>month;
switch(month){
case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:
    cout<<month<<" have 31 days"<<endl;
break ;
case 2:
    cout<<month<<" have 28 days"<<endl;
break ;
default:
    cout<<month<<" have 30 days"<<endl;
}


//*************************************************CODE BY sharpsbrain *********************************************************************************8
 return 0;
}
