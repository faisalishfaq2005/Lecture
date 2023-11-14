#include<iostream>
using namespace std;
double min(double num1,double num2);

main()
{
double num1,num2;
cout << "Enter the first number: ";
cin>>num1;
cout << "Enter the second number: ";
cin>>num2;
cout<< "The minimum of "<<num1<< " and "<<num2<<" is: "<<min(num1,num2);

}
double min(double num1,double num2)
{
if (num1<num2)
{return num1;
}else if(num2<num1)
{return num2;}
}


