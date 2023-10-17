#include<iostream>
#include<istream>
#include<fstream>
using namespace std;
int main()
{ string data[24][5],id,pass;
  int i,j;
    fstream userpassdata;
     userpassdata.open("userpassdata.bin",ios::in);   //.bin file extension .More Security
     
     for(i=0;i<24;i++)
	 {  
	   for(j=0;j<5;j++)
	    {
		 userpassdata>>data[i][j];
        }
     } 
    program: 
    cout<<"\t\t\tWelcome to Username and Password Program."<<endl;
    cout<<"\n\t\tNOTE : Username and Password are case-sensitive."<<endl<<endl;
    cout<<"\nEnter Your Username : ";
    cin>>id;
    cout<<"Enter Password : ";
    cin>>pass;
    short int d=0;
    for(i=0;i<24;i++)
    {
    	if((id==data[i][0])&&(pass==data[i][1]))
    	{ d=1;
    		cout<<"\nAccess Granted."<<endl;
    		cout<<"\nWelcome "<<data[i][2]<<" "<<data[i][3]<<"."<<endl;
    		cout<<"\nYour Enrollment Number is : "<<data[i][4]<<endl<<endl;
    		break;
		}
		
	}
	
    if(d==0)
    {
     	cout<<"\nAccess Denied. Please enter corret username or password. "<<endl<<endl;
     	goto program;
	}
	
	else
	{
	    cout<<"\n\t\t\t\tThis Program is created by Param Sahu."<<endl;
	}
	 userpassdata.close();
}
