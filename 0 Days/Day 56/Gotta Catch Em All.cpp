#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,n,ui,x,y,ans=0;
	cin>>n>>x>>y;
	
	for(i=0;i<n;i++){
		cin>>ui;
		
		if(ui*x>y){
			ans+=y;
		}else{
			ans+=(ui*x);
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
