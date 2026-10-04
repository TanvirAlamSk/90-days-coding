#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,x,ur;
	cin>>n>>x;
	n*=2;
	ur=n-x;
	
	cout<<max(0,x-ur)<<endl;
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



