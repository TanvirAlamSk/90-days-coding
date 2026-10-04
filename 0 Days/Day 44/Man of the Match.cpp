#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,r,w,n=0,ans=0;
	
	for(i=1;i<=22;i++){
		cin>>r>>w;
		if(n<r+20*w){
			n=r+20*w;
			ans=i;
		}
	}
	
	cout<<ans<<endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		solve();
	}
}




