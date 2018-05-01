#include <iostream>
using namespace std;
#include <string>
//#include "gender.h"

class  VISITINGFACULTY
{
 public:
	void FVisitingfaculty(void)
	{
		cout << "Is your teacher is from urdu department?" << endl;
		cin >> ans;
		if (ans == "yes")
		{
			cout << "Is your teacher is assistant professor in urdu department?" << endl;
			cin >> ans;
			if (ans == "yes")
			{
				cout << "your teache is Rahat Afshan";
			}
			else if (ans != "yes")
			{
				cout << "Is your teacher is professor in Urdu department?" << endl;
				cin >> ans;
				if (ans == "yes")
				{
					cout << "your teacher is Tazeem-ul-Firdoos";
				}
				else {
					cout << "your teacher is Sohaila Farooqi";
				}

			}
		}
			else if (ans != "yes")
			{
				cout << "Is your teacher is from maths department?" << endl;
				cin >> ans;
				if (ans == "yes")
				{

					cout << "does your teacher wear gown in class" << endl;
					cin >> ans;
					if (ans == "yes")
					{
						cout << "your teacher is Noor Fatima";
					}
					else{
						cout << "your teacher is HAFSA JAFRI";
					}
				}
				else {
					cout << "your teacher is Zufishan Ghani";
				}
			}
		}

   void MVisitingfaculty() 
  
    {
      cout << "Is your teacher teaches data communication and networking in  department?" << endl;
				cin >> ans;
				if (ans == "yes")
        {
         cout << "your teacher is NADEEM AHMAD";
         goto end;
        }
        else if(ans != "yes")
        {
          cout<<"Is your lecturer at  Sheikh Zayed Islamic Center ?"<<endl;
					cin >> ans;
				         	if (ans == "yes")
				            	{
					            	cout << "your teacher is MR. ABDUL BARI";
                         goto end;
					             }
                       else
                        {
				                 cout << "Is your teacher teaches physics department?" << endl;
			                	cin >> ans;
				                if (ans == "yes")
				                   {
                           	cout << "does your teacher also teaches at ISPA?" << endl;
				                  	cin >> ans;
					                   if (ans == "yes")
				                     	{
						                   cout << "your teacher is KHURRAM IQBAL";
                               goto end;
					                    }
				                      	else{
						                     cout << "your teacher is INTIKHAB ULFAT";
                                 goto end;
					                          }
                          }
				
				        else if(ans != "yes")
            {   
                   cout<<"Does your teacher teaches islamiat in your dept?"<<endl;
					         cin >> ans;
				         	if (ans == "yes")
				            	{
					            	cout << "your teacher is MR MOHSIN";
                         goto end;
					             }
                   else if(ans != "yes")
                {
                      cout<<"Does your teacher teaches pst in your dept?"<<endl;
					         cin >> ans;
				         	if (ans == "yes")
				            	{
					            	cout << "your teacher is DR MOIZ";
                         goto end;
					            }
                       else if(ans != "yes")
                    {
                        cout<<"Does your teacher teaches maths in your dept?"<<endl;
					         cin >> ans;
				         	if (ans == "yes")
				            	{
					            	cout << "your teacher is ASIF IQBAL";
                         goto end;
					            }

                       else if(ans != "yes")
                      {
                        cout<<"Does your teacher GOLD MEDALIST?"<<endl;
					         cin >> ans;
				         	if (ans == "yes")
				            	{
					            	cout << "your teacher is ANWAR MEHMOOD";
                         goto end;
                      }
                       else{
                         cout << "your teacher is ZEESHAN ALAM NAYYAR";
                           }
                      }
                   }
	  	          }
            }

                        }
        } 
      end:;
  }
                        
                        
  private:
	string ans;
};