#include<bits/stdc++.h>
using namespace std;

void solve(){
	int x,y;
	cin>>x>>y;
	
	cout<<(abs(x-y)+1)/2<<endl;
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



