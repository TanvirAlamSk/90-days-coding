#include<bits/stdc++.h>
using namespace std;

int solve(){
	int a,b,c;
	cin>>a>>b>>c;
	
	cout<<max(a,max(b,c))-min(a,min(b,c))<<endl;
	
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



