#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,n;
	long long ans=0,ui,last;
	cin>>n;
	
	for(i=0;i<n;i++){
		cin>>ui;
		if(i>0){
			ans+=abs(last-ui)-1;
		}
		last=ui;
	}
	
	cout<<ans<<endl;
	
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




