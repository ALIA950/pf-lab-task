#include<iostream>
using namespace std;
int main()
{
	int sum=0,num=0;
	float avg;
	int i=1;
  do
  {
  	cout<<"enter the number:"<<endl;
  	cin>>num;
  	
  	sum+=num;
  	avg=sum/i;
  	 
  	 
  	i++;
	  }	
 while(i<=5);
	
	cout<<"sum of numbers is:"<<sum<<endl;
	cout<<"Average of numbers is:"<<avg;
	
	return 0;
}