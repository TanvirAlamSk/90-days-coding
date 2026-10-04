#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,n,ui;
	long long sum=0;
	cin>>n;
	map<int,int>mp;
	
	for(i=0;i<n;i++){
		cin>>ui;
		mp[ui]=i+1;
	}
	
	for(auto it:mp){
		sum+=it.second;
	}
	cout<<sum<<endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T=1;
	cin>>T;
	
	while(T--){
		solve();
	}
	
	return 0;
}
