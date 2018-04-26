#include <iostream>
using namespace std;
#include "Faculty.h"
int main()
{
 faculty a;
 string ans = "yes";
 while(ans == "yes" )
 {
 a.Faculty();
 cout<<endl<<"Wanna continue??"<<endl; 
 cin>>ans;
 system("cls");
 };
  system("pause");
}