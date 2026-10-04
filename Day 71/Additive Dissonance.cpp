#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,i,ui,cnt=0;
	cin>>n;
	map<int,int>mp;
	
	for(i=0;i<n;i++){
		cin>>ui;
		mp[ui]++;
		cnt=max(mp[ui],cnt);
	}
	
	cout<<(cnt+1)/2<<endl;
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

