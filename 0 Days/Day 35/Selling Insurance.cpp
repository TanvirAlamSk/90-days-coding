#include<bits/stdc++.h>
using namespace std;

void solve(){
	int x;
	cin>>x;
	
	float r=(.1*10*x*20)/100;
	
	int ans=100/r;
	if(100/r!=ans){
		cout<<ans+1<<endl;
	}else{
		cout<<ans<<endl;
	}
	
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

