#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,n,ui,sum=0,ans=0;
	cin>>n;
	
	for(i=1;i<=n;i++){
		cin>>ui;
		sum+=ui;
		if(sum==i){
			ans++;
		}
	}
	
	cout<<ans<<"\n";
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
