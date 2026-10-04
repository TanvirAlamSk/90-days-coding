#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,i,ui;
	cin>>n;
	map<int,int>mp;
	
	for(i=0;i<n;i++){
		cin>>ui;
		mp[ui]++;
	}
	
	for(auto it:mp){
		if(it.second%it.first!=0){
			cout<<"NO\n";
			return;
		}
	}
	
	cout<<"YES\n";
	return;
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
