#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,x;
	cin>>n>>x;
	
	if(x%2==0 && n%2==1){
		cout<<"NO\n";
	}else{
		cout<<"YES\n";
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




