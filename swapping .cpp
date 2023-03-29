#include<iostream>
using namespace std;
int main(){
	int a=5;
	int b=90;
	//swapping using thrid variable
	int temp=a;
	a=b;
	b=temp;
//	cout<<a<<" "<<b<<endl;
	///swapping without using thrid variable
	a=a+b;
	b=a-b;
	a=a-b;
//	cout<<a<<" "<<b<<endl;
///swappinh in oneline code
	a=(a+b)-(b=a);
//using bitwise opertor
a=a^b;
b=b^a;
a=a^b;
	cout<<"a="<<a<<" "<<"b="<<b<<endl;
	return 0;
}
