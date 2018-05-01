#include <iostream>
using namespace std;
#include "Faculty.h"
int main()
{
 faculty a;
 string ans = "yes";
 cout<<endl<<"           ***************THE AKINATOR***************"<<endl<<endl;
 while(ans == "yes" )
 {
 a.Faculty();
 cout<<endl<<"Wanna continue??"<<endl; 
 cin>>ans;
 system("cls");
 cout<<endl<<"           ***************THE AKINATOR***************"<<endl<<endl;
 };
  system("pause");
}