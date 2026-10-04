#include<bits/stdc++.h>
using namespace std;

void solve(){
	int x,y;
	cin>>x>>y;
	if(x>=2*y){
		cout<<y<<endl;
	}else{
		cout<<x/2<<endl;
	}
	
	
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		solve();
	}
}
