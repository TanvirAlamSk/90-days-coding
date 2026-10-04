#include<bits/stdc++.h>
using namespace std;

int solve(){
	int d,x,y,z;
	cin>>d>>x>>y>>z;
	
	cout<<max(x*7,d*y+(7-d)*z)<<endl;
	return 0;
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
