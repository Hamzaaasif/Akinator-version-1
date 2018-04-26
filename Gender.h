#include <iostream>
using namespace std;
#include "AssosiateProfs.h"

class gender
{
  public:
void permenentmale()
{
  cout<<"Does your teacher male?"<<endl;
  cin>>ans;
  if(ans == "Yes" || ans == "yes")
  {
    teacher.MAssosiateProf();
  }
  else 
  {
    Fteacher.FAssistantprofs();
  }
}

void visitingmale()
{
  cout<<"Does your teacher male?"<<endl;
  cin>>ans;
  if(ans == "Yes" || ans == "yes")
  {
    cout<<"under construction xD";
  }
  else 
  {
    cout<<"under construction xD";
  }
}
 private:
 string ans;
 AssosiateProfs teacher;
 Assistantprofs Fteacher;
};