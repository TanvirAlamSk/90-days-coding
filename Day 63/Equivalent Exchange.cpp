#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,n,k,ans=0,ui,mx=0,mn=0;
	cin>>n>>k;
	
	for(i=0;i<n;i++){
		cin>>ui;
		if(ui>0){
			ans+=ui;
		}else{
			ans+=ui;
		}
		mx=max(mx,ans);
		mn=min(mn,ans);
	}
	
	if(mx-mn>k){
		cout<<"No\n";
	}else{
		cout<<"Yes\n";
	}
	
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




