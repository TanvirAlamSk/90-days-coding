#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,x,y;	
	cin>>n>>x>>y;
	
	if(x*2<y){
		cout<<(n%2)*x+n/2*y<<endl;
	}else{
		cout<<n*x<<endl;
	}
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

