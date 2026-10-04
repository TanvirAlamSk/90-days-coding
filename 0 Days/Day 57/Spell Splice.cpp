#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,j,n,ans=0;
	
	cin>>n;
	int a[n],v[n];
	
	for(i=0;i<n;i++){
		cin>>a[i]>>v[i];
	}
	
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			ans=max(ans,a[i]*v[j]+v[i]*a[j]);
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

