#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,n,ans=0,k;
	cin>>n;
	
	vector<int>vt(n);
	
	for(i=0;i<n;i++){
		cin>>vt[i];
	}
	cin>>k;
	
	for(i=0;i<n;i++){
		if(vt[i]<vt[k-1]){
			ans++;
		}
	}
	
	cout<<ans+1<<endl;
	
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


