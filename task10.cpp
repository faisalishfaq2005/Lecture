#include<iostream>
#include<cmath>
using namespace std;
void convertor(int num);
main()
{
int num;
cout<< "Enter a number (1-99): ";
cin>>num;
convertor(num);
}
void convertor(int num)
{
if (num<=10)
{
if (num==1)
{
cout<<"One";
}
else if (num==2)
{
cout<<"Two";
}
else if (num==3)
{
cout<<"Three";
}
else if (num==4)
{
cout<<"Four";
}
else if (num==5)
{
cout<<"Five";
}
else if (num==6)
{
cout<<"Six";
}
else if (num==7)
{
cout<<"Seven";
}
else if (num==8)
{
cout<<"Eight";
}
else if (num==9)
{
cout<<"Nine";
}
else if (num==10)
{
cout<<"Ten";
}
}
else if (num>10)
{
int num1,num2;
num1=num%10;
num2=(num/10)%10;
if (num1==2)
{
cout<<"Twenty";
}
else if (num1==3)
{
cout<<"Thirty";
}
else if (num1==4)
{
cout<<"Forty";
}
else if (num1==5)
{
cout<<"Fifty";
}
else if (num1==6)
{
cout<<"Sixty";
}
else if (num1==7)
{
cout<<"Seventy";
}
else if (num1==8)
{
cout<<"Eighty";
}
else if (num1==9)
{
cout<<"Ninety";
}

else if (num2==1)
{
cout<<"One";
}
else if (num2==2)
{
cout<<"Two";
}
else if (num2==3)
{
cout<<"Three";
}
else if (num2==4)
{
cout<<"Four";
}
else if (num2==5)
{
cout<<"Five";
}
else if (num2==6)
{
cout<<"Six";
}
else if (num2==7)
{
cout<<"Seven";
}
else if (num2==8)
{
cout<<"Eight";
}
else if (num2==9)
{
cout<<"Nine";
}
}

}