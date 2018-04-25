//M.Assistantprofs.h
#include <iostream>
#include "MLecturers.h"
using namespace std;
class Assistantprofs
{
  public:
void MAssistantprofs()
{
  cout<<"Is your teacher Assistantprof?"<<endl;
  cin>>this->ans;
  if(this->ans == "Yes" || this->ans == "yes")
 {  
  cout<<"Is your teacher depertment's x-chairperson?"<<endl;
  cin>>this->ans;
  if(this->ans == "Yes" || this->ans == "yes")
  {
    cout<<"Your teacher is MR BADAR SAMI"<<endl;
    goto end;
  }
  cout<<"Is your teacher phd?"<<endl;
  cin>>this->ans;
   if (this->ans == "Yes" || this->ans == "yes")
  {  
      cout<<"Is your teacher x-student advisor?"<<endl;
      cin>>ans;
      if (ans == "Yes" || ans == "yes")
      {
        cout<<"Your teacher is MR FARHAN AHMED SIDQUI"<<endl;
        goto end;
      }

      cout<<"Is your teacher teaches Artifical Intellegence course?"<<endl;
      cin>>ans;
       if (ans == "Yes" || ans == "yes")
      {
        cout<<"Your teacher is DR NADEEM MEHMOOD"<<endl;
        goto end;
      }

      cout<<"Is your teacher teaches Networking?"<<endl;
      cin>>ans;
       if (ans == "Yes" || ans == "yes")
      {
        cout<<"Your teacher is DR MUHAMMAD SAEED"<<endl;
        goto end;
      }

      cout<<"Is your teacher teaches Software project management?"<<endl;
      cin>>ans;
       if (ans == "Yes" || ans == "yes")
      {
        cout<<"Your teacher is MR HUSSAIN SALEEM"<<endl;
        goto end;
      }

      cout<<"Is your teacher teaches database management system?"<<endl;
      cin>>ans;
       if (ans == "Yes" || ans == "yes")
      {
        cout<<"Your teacher is MR S. M. KHALID JAMAL"<<endl;
        goto end;
      }

      cout<<"Is your teacher teaches related to data mining?"<<endl;
      cin>>ans;
       if (ans == "Yes" || ans == "yes")
      {
        cout<<"Your teacher is DR TAHSEEN AHMED JILANI"<<endl;
        goto end;
      }
      else
      {
        cout<<"Your teacher is DR SYED ASIM ALI"<<endl;
        goto end;
      }

    }
    else
    {
      cout<<"Your teacher is MR SYED JAMAL HUSSAIN"<<endl;
      goto end;
    }
  }
  else
  {
    //next class
    teacher.MLecturers();
  };
  end:;
}

  
 private:
 string ans;
 Lecturers teacher;
 
};