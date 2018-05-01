#include <iostream>
using namespace std;
#include "AssosiateProfs.h"
#include "Visitingfaculty.h"

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
    faculty.MVisitingfaculty();
  }
  else 
  {
    faculty.FVisitingfaculty();
  }
}
 private:
 string ans;
 AssosiateProfs teacher;
 Assistantprofs Fteacher;
 VISITINGFACULTY faculty;
};