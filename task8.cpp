# include <iostream>
using namespace std;
void OddishOrEvenish(int num);
main()
{
int num;
cout<< "Enter a five-digit number: ";
cin >> num;
OddishOrEvenish(num);

}
void OddishOrEvenish(int num)
{
int num1,num2,num3,num4,num5;
num1=num%10;
num2=(num/10)%10;
num3=(num/100)%10;
num4=(num/1000)%10;
num5=(num/10000)%10;
int sum=num1+num2+num3+num4+num5;
if ((sum%2)==0)
{
cout << "Evenish";
}else{
cout<< "Oddish";
}
}