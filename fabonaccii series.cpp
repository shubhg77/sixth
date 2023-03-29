#include<iostream>
using namespace std;
int main()
{
	int num,next,x=0,y=1;
	cout<<"print fabonaci series"<<endl;
	cout<<"enter the value"<<endl;
	cin>>num;
    for(int i=0;i<num;i++){
    	cout<<x<<endl;
    	next=x+y;
    	x=y;
    	y=next;
    	
	}
	return 0;
}
