#include<iostream>
#include<cmath>
using namespace std;
void Root(float a,float b,float c);
main()
{
int a,b,c;
cout<< "Enter the value of a: ";
cin>>a;
cout<< "Enter the value of b: ";
cin>>b;
cout<< "Enter the value of c: ";
cin>>c;
Root(a,b,c);
}
void Root(float a,float b,float c)
{
double disc=(b*b)-(4*a*c);
if (disc>0)
{
double root1=(((-1*b)+(sqrt(disc)))/(2*a));
double root2=(((-1*b)-(sqrt(disc)))/(2*a));
cout<< "Solutions: x = "<<root1<<" and x = "<<root2;
}
else if(disc==0)
{
double root1=((-1*b)/(2*a));
double root2=((-1*b)/(2*a));
cout<< "Solution: x = "<<root1;
}
else if(disc<0)
{
double ro1=((-1*b)/(2*a));
double ot1=(sqrt(abs(disc)))/(2*a);
cout << "Complex Solutions: x = "<<ro1<<" + "<<ot1<<"i and x = "<<ro1<<" - "<<ot1<<"i";
}
}

        