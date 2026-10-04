#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,x,ans;
	cin>>t;
	
	while(t--){
		cin>>x;
		ans=x%3;
		if(ans==0){
			cout<<0<<endl;
		}else{
			cout<<3-ans<<endl;
		}
	}
	
	return 0;
}
