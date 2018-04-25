//MFullTimeCooperative.h
#include <iostream>
using namespace std;
class gender
{
  public:
void MFullTimeCooperative()
{
  cout<<"Is your teacher teaches related to statistics and probability?"<<endl;
  cin>>ans;
  if(ans == "Yes" || ans == "yes")
  {
    cout<<"Your teacher is MR SAAD AKBER"<<endl;
  }
   if(ans == "yes" || ans == "Yes")
  {
  cout<<"Your teacher is MR USMAN AMJAD"<<endl;
  }
  else 
  {
    cout<<"Your teacher is MR S. MEESAM ALI ZAIDI"<<endl;
  }
}
 private:
 string ans;
};