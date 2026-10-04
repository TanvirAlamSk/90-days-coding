#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,a;
	cin>>n>>a;
	
	cout<<min(a,n-a)<<endl;
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




