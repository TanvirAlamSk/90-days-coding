#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,n;
	cin>>n;
	vector<int>vt(n);
	
	for(i=0;i<n;i++){
		cin>>vt[i];
	}
	
	sort(vt.begin(),vt.end());
	
	int ans=min({vt[n-2]-vt[1],vt[n-1]-vt[2],vt[n-3]-vt[0]});
	
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
}



