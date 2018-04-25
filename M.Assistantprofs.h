//M.Assistantprofs.h
#include <iostream>
using namespace std;
class gender
{
  public:
void MLecturers()
{
  cout<<"Is your teacher depertment's x-chairperson?"<<endl;
  cin>>ans;
  if(ans == "Yes" || ans == "yes")
  {
    cout<<"Your teacher is MR BADAR SAMI"<<endl;
  }
  else if (ans == "no" || ans == "No")
  {
    cout<<"Is your teacher phd?"<<endl;
    cin>>ans;
    if (ans == "no" || ans == "No")
    {
      cout<<"Your teacher is MR SYED JAMAL HUSSAIN"<<endl;
    }
    else
    {
      cout<<"Is your teacher x-student advisor?"<<endl;
      cin>>ans;
      if (ans == "Yes" || ans == "yes")
      {
        cout<<"Your teacher is MR FARHAN AHMED SIDQUI"<<endl;
      }

      cout<<"Is your teacher teaches Artifical Intellegence course?"<<endl;
      cin>>ans;
       if (ans == "Yes" || ans == "yes")
      {
        cout<<"Your teacher is DR NADEEM MEHMOOD"<<endl;
      }

      cout<<"Is your teacher teaches Networking?"<<endl;
      cin>>ans;
       if (ans == "Yes" || ans == "yes")
      {
        cout<<"Your teacher is DR MUHAMMAD SAEED"<<endl;
      }

      cout<<"Is your teacher teaches Software project management?"<<endl;
      cin>>ans;
       if (ans == "Yes" || ans == "yes")
      {
        cout<<"Your teacher is MR HUSSAIN SALEEM"<<endl;
      }

      cout<<"Is your teacher teaches database management system?"<<endl;
      cin>>ans;
       if (ans == "Yes" || ans == "yes")
      {
        cout<<"Your teacher is MR S. M. KHALID JAMAL"<<endl;
      }

      cout<<"Is your teacher teaches related to data mining?"<<endl;
      cin>>ans;
       if (ans == "Yes" || ans == "yes")
      {
        cout<<"Your teacher is DR TAHSEEN AHMED JILANI"<<endl;
      }
      else
      {
        cout<<"Your teacher is DR SYED ASIM ALI"<<endl;
      }

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