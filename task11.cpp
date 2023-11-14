# include <iostream>
using namespace std;
void calculatePoolState(int vol,int p1,int p2,float H);
main()
{
int vol,p1,p2;
float H;
cout << "Enter volume of the pool in liters: ";
cin>>vol;
cout << "Enter flow rate of the first pipe per hour: ";
cin>>p1;
cout << "Enter flow rate of the second pipe per hour: ";
cin>>p2;
cout << "Enter hours that the worker is absent: ";
cin>>H;
calculatePoolState(vol,p1,p2,H);
}
void calculatePoolState(int vol,int p1,int p2,float H)
{
float total=(p1*H)+(p2*H);
int percent=(total/vol)*100;
int p1per=((p1*H)/total)* 100;
int p2per=((p2*H)/total)* 100;
if (percent<=100){
cout<< "The pool is "<<percent<<"% full. Pipe 1: "<<p1per<<"%. Pipe 2: "<<p2per<<"%.";
}else{
int over=((percent/100)*vol)-vol;
cout<< "For "<<H<< " hours, the pool overflows with "<<over<< " liters.";
}
}
