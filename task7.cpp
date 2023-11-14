# include <iostream>
using namespace std;
void IsSymmetrical(int num);
main()
{
int num;
cout<< "Enter a three-digit number: ";
cin >> num;
IsSymmetrical(num);

}
void IsSymmetrical(int num)
{
int num1,num2,num3;
num1=num%10;
num2=(num/10)%10;
num3=(num/100)%10;
if (num1==num3)
{
cout << "The number is symmetrical.";
}else{
cout<< "The number is not symmetrical.";
}
}