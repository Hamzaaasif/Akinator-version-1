//M.AssosiateProfs.h
#include <iostream>
using namespace std;
#include "Assistantprofs.h"

class AssosiateProfs
{
public:

void MAssosiateProf()
{
  cout<<"Does your teacher Assosiate Professor?"<<endl;
  cin>>ans;
  if(ans == "Yes" || ans == "yes")
  {
    cout<<"Is your teacher Depertment's chairperson?"<<endl;
    cin>>ans;
   if(ans == "Yes" || ans == "yes")
   {
     cout<<"Your Teachers is DR SADIQ ALI KHAN"<<endl;
   }
   else
   {
     cout<<"Your Teachers is DR NADEEM MEHMOOD"<<endl;
   }

  }
  else 
  {
//NEXT CLASS
teacher.MAssistantprofs();
  }
}
 private:
 string ans;
 Assistantprofs teacher;
};