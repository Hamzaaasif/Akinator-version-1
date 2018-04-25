//MLecturers.h
#include <iostream>
#include"MFullTimeCooperative.h"

using namespace std;
class Lecturers
{
  public:
void MLecturers()
{
  cout<<"Is your teacher Lecturer?"<<endl;
  cin>>ans;
  if(ans == "Yes" || ans == "yes")
  {
  cout<<"Is your teacher student's advisor?"<<endl;
  cin>>ans;
  if(ans == "Yes" || ans == "yes")
  {
    cout<<"Your teacher is MR TAHA BIN NIAZ"<<endl;
  }
 else 
  {
    cout<<"Your teacher is MR M. SAJID"<<endl;
  }
  }
  else 

{
  //next class
  teacher.MFullTimeCooperative();
}
}
 private:
 string ans;
 FullTimeCooperative teacher;
};