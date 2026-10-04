#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,n,m,ui,ans=0;	
	cin>>n>>m;
	vector<int>vt(n);
	
	for(i=0;i<n;i++){
		cin>>vt[i];
	}
	sort(vt.begin(),vt.end());
	//reverse(vt.begin(),vt.end());
	for(i=0;i<m;i++){
		cin>>ui;
		ans+=n-(lower_bound(vt.begin(),vt.end(),ui)-vt.begin());
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


