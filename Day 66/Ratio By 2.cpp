#include<bits/stdc++.h>
using  namespace std;

void solve(){
	int x,y,ans;
	cin>>x>>y;
	
	if(x*2<=y || y*2<=x){
		ans=0;
	}else if(x>y){
		ans=y-x/2;
	}else{
		ans=x-y/2;
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
}



