#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,n,ui,ans=INT_MAX;
	cin>>n;
	map<int,pair<int,int>>mp;
	pair<int,int>pr;
	
	for(i=1;i<=n;i++){
		cin>>ui;
		if(mp.count(ui)){
			pr=mp[ui];
			mp[ui]={pr.first,i};
		}else{
			mp[ui]={i,0};
		}
	}
	
	if((int)mp.size()==n){
		ans=-1;
	}else{
		for(auto it:mp){
			if(it.second.second){
				ans=min(ans,it.second.first-1+n-it.second.second);
			}
		}
	}
	
	cout<<ans<<endl;
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

