#include<iostream>
using namespace std;
int main()
{
string food="pizza";
string *ptr=&food;
cout<<food<<endl;
cout<<endl;
cout<<&food<<endl;
cout<<*ptr<<endl;
*ptr="burger";
cout<<*ptr<<endl;
cout<<food;
return 0;
}