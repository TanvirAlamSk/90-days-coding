#include<bits/stdc++.h>
using namespace std;

void solve(){
	int x,y,nd;
	cin>>x>>y;
	
	nd=y+10-x+2;
	
	cout<<max(0,nd/3)<<endl;
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


