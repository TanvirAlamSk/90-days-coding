#include<bits/stdc++.h>
using namespace std;

void solve(){
	int x,y,z;
	cin>>x>>y>>z;
	
	if(y<=z){
		cout<<2*y<<endl;
	}else{
		cout<<z*2<<endl;
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



