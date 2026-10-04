#include<bits/stdc++.h>
using namespace std;


void solve(){
	int k,n,res;
	cin>>k>>n;
	
	res=k/(n+1);
	
	cout<<res+k-res*(n+1)<<endl;
	
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

