#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,n,ui,ans=0;
	cin>>n;
	map<int,int>mp;
	
	for(i=1;i<=n;i++){
		cin>>ui;
		mp[ui]++;
		ans=max(ans,mp[ui]);
	}
	
	cout<<n-ans<<endl;
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


