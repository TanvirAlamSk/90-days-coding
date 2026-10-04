#include<bits/stdc++.h>
using namespace std;

void solve(){
	int a,b,x,y;
	cin>>a>>b>>x>>y;
	
	cout<<x/a+y/b<<endl;
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


