#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,n,ans=1000,sw,temp;
	cin>>n;
	
	vector<int>vt(n);
	
	for(i=0;i<n+1;i++){
		cin>>vt[i];
	}
	sw=vt[0];
	for(i=1;i<n+1;i++){
		temp=max(vt[i],sw);
		ans=min(ans,temp);
		sw=vt[i];
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




