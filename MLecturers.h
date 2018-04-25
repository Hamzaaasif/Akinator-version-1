//MLecturers.h
#include <iostream>
using namespace std;
class gender
{
  public:
void MLecturers()
{
  cout<<"Is your teacher student's advisor?"<<endl;
  cin>>ans;
  if(ans == "Yes" || ans == "yes")
  {
    cout<<"Your teacher is MR TAHA BIN NIAZ"<<endl;
  }
 if(ans == "No" || ans == "no")
  {
    cout<<"Your teacher is MR M. SAJID"<<endl;
  }
  else 
  {
    //NEXT CLASS
  }
}
 private:
 string ans;
};