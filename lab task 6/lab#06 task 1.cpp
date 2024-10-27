#include<iostream>
using namespace std;
int main()
{
  int pass1= 12345;
 
   
   int pass,i=0;
	while(i<3)
	{
		 cout<<"Enter the password:"<<endl;
         cin>>pass;
       
         
	 if(pass1==pass)
	    cout<<"Login succesful!";
	else
	  cout<<"LOgin failed!";
	  
	  i++;	
	}
	
	return 0;
}