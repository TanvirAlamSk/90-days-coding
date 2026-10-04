#include<bits/stdc++.h>
using namespace std;


void solve(){
	int n,m,cnt=0;
	cin>>n>>m;
	
	while(n>1){
		cnt+=(n/2);
		n=(n+1)/2;
	}
	
	if(cnt<m){
		cout<<"NO"<<endl;
	}else{
		cout<<"YES"<<endl;
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
	
	return 0;
}


