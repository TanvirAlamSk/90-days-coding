#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,n,ans=0,l,r,ui,ls=0,ind;
	cin>>n;
	set<pair<int,int>>st;
	set<int>ps;
	
	for(i=0;i<n;i++){
		cin>>ui;
		st.insert({-1*ui,i});
	}
	
	for(auto it:st){
		ind=distance(ps.begin(),ps.lower_bound(it.second));
		
		l=it.second-(ind-0);
		r=n-1-it.second-ls-ind;
		ans+=min(l,r);
		ps.insert(it.second);
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

