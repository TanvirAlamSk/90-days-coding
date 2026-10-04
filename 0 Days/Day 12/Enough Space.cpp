#include<bits/stdc++.h>
using namespace std;

int solve(){
	int n,x,y;
	
	cin>>n>>x>>y;
	
	if(n<x+y*2){
		cout<<"NO"<<endl;
	}else{
		cout<<"YES"<<endl;
	}
	
	return 0;
}

int main(){
	
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	
	return 0;
}
