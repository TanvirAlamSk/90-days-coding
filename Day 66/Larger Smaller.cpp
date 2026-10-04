#include<bits/stdc++.h>
using  namespace std;

void solve(){
	int i,n,ui,mx=0,mn=105;
	cin>>n;
	
	for(i=0;i<n;i++){
		cin>>ui;
		mn=min(mn,ui);
		mx=max(mx,ui);
	}
	
	cout<<max(0,mx-mn-1)<<endl;
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




