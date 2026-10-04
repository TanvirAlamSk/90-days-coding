#include<bits/stdc++.h>
using namespace std;

void solve(){
	int a,b,cnt=0;
	long long n,x;
	cin>>n>>a>>b;
	x=2;
	while(x<=n){
		cnt++;
		x*=2;
	}
	cout<<cnt*a+(cnt-1)*b<<"\n";
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



