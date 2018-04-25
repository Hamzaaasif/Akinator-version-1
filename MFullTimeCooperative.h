//MFullTimeCooperative.h
#include <iostream>
using namespace std;
class FullTimeCooperative
{
  public:
void MFullTimeCooperative() 
{
  cout<<"Is your teacher Full Time Cooperative?"<<endl;
  cin>>this->ans;
  if(ans == "Yes" || ans == "yes")
  {
  cout<<"Is your teacher teaches related to statistics and probability?"<<endl;
  cin>>this->ans;
  if(this->ans == "Yes" || ans == "yes")
  {
    cout<<"Your teacher is MR SAAD AKBER"<<endl;
    goto end;
  }
  cout<<"Is your teacher teaches related to mathematics?"<<endl;
  cin>>this->ans;
   if(this->ans == "yes" || ans == "Yes")
  {
  cout<<"Your teacher is MR USMAN AMJAD"<<endl;
  goto end;
  }
  else 
  {
    cout<<"Your teacher is MR S. MEESAM ALI ZAIDI"<<endl;
  }
 }
  else
  {
    cout<<"Apna baap ka naam chahta hy kya?"<<endl;
  }

  end:;
}
 private:
 string ans;
};

//https://github.com/Hamzaaasif/Akinator.git