#include <iostream>
using namespace std;
#include "Gender.h"
int main()
{
 gender a;
 string ans = "yes";
 while(ans == "yes" )
 {
 a.male();
 cout<<"Wanna continue??"<<endl; 
 cin>>ans;
 };
  system("pause");
}