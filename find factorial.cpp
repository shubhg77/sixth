#include<bits/stdc++.h>
using namespace std;
int main(){
	int n ;
	cin>>n;
	int ans =1;
	for(int i=n;i>0;i--){
	 ans=ans*i;
	}
	cout<<ans;
	return 0;
}
