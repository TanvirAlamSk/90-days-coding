#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,m;
	
	cin>>n>>m;
	
	if(abs(n-m)%2==0){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
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
