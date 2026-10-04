#include<bits/stdc++.h>
using namespace std;

void solve(){
	int m,a,b;
	cin>>a>>b>>m;
	int x=abs(a-b);
	cout<<min(x,m-x)<<endl;
	
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
