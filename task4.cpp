#include<iostream>
#include <cmath>
using namespace std;
double Height(double distance,double angle);

main()
{
double distance,angle;
cout << "Enter the distance from the base of the tree (in feet): ";
cin>>distance;
cout << "Enter the angle of elevation (in degrees): ";
cin>>angle;
cout<< "The height of the tree is: "<<Height(distance,angle)<< " feet";

}
double Height(double distance,double angle)
{
double anglerad=angle/57.2958;
double height=distance * (tan(anglerad));
return height;
}
