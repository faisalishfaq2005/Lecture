# include <iostream>
using namespace std;
void cheakAlphabetCase(char inp);
main()
{
char inp;
cout << "Enter a character (A/a): ";
cin>>inp;
cheakAlphabetCase(inp);
}
void cheakAlphabetCase(char inp)
{
if (inp=='A'){
cout << "You have entered Capital A";}
else if (inp=='a'){
cout << "You have entered small a";}

}