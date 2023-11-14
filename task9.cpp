# include <iostream>
using namespace std;
void timeTravel(int hour,int min);
main()
{
int hour,min;
cout<< "Enter Hours: ";
cin>>hour;
cout<< "Enter Minutes: ";
cin>>min;
if (((hour>0) && (hour<=23))&& ((min>0) && (min<=59))){
timeTravel(hour,min);
}

}
void timeTravel(int hour,int min)
{
min=min+15;
if (min>60){
hour=hour+1;
min=min-60;}
cout<<hour<<":"<<min;
}