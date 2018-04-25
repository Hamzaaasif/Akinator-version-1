//M.AssosiateProfs.h
#include <iostream>
using namespace std;
class gender
{
  public:
void MAssosiateProf()
{
  cout<<"Is your teacher Assosiate Professor?"<<endl;
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
  }
}
 private:
 string ans;
};