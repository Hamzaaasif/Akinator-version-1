//MLecturers.h
#include <iostream>
#include"FullTimeCooperative.h"

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
  teacher.MFullTimeCooperative();
}
}


void FLecturers()
{
  cout<<"Does your teacher Lecturer?"<<endl;
  cin>>ans;
  if(ans == "Yes" || ans == "yes")
  {
  cout<<"Does your teacher student's advisor?"<<endl;
  cin>>ans;
  if(ans == "Yes" || ans == "yes")
  {
    cout<<"Your teacher is MS HUMERA BASHEER"<<endl;
    goto end;
  }
  cout << "Have your teacher done her MBA in 2009 from KUBS ?" << endl;	
	cin >> ans;
			if (ans == "yes" || ans == "Yes")
			{
				cout << "your teacher is MARYAM FEROZ"<<endl;
        goto end;
			}
    cout << "is your teacher's best scope is operating systems?" << endl;
		cin >> ans;
				if (ans == "yes" || ans == "Yes")
				{
					cout << "Your teacher is MADIHA KHURRAM"<<endl;
          goto end;
				}
        else 
        {
          cout << "Your teacher is SHAISTA RAEES"<<endl;
          goto end;
         }
 }
 else
 {
   teacher.FFullTimeCooperative(); 
 }

 end:;
}

 private:
 string ans;
 FullTimeCooperative teacher;
};