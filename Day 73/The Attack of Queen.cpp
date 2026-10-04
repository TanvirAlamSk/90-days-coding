#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,x,y;
	cin>>n>>x>>y;
	
	cout<<(n-1)*2+min(x-1,y-1)+min(n-x,n-y)+min(x-1,n-y)+min(n-x,y-1)<<endl;
	
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





