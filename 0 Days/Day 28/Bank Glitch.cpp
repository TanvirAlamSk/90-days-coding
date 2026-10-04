#include<bits/stdc++.h>
using namespace std;


void solve(){
	int a,b,x,y;
	cin>>a>>b>>x>>y;
	
	cout<<(a/x)*y+(a%x)+b<<endl;
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

