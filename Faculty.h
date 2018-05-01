#include <iostream>
using namespace std;
#include "Gender.h"

class faculty
{
  public:
void Faculty()
{
  cout<<"Does your teacher permenent?"<<endl;
  cin>>ans;
  if(ans == "Yes" || ans == "yes")
  {
    teacher.permenentmale();
  }
  else 
  {
   teacher.visitingmale();
  }
}
 private:
 string ans;
 gender teacher;
 
};