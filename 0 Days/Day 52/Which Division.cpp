#include<bits/stdc++.h>
using namespace std;

void solve(){
	int r;	
	cin>>r;
	
	if(r<1600){
		cout<<3;
	}else if(r<2000){
		cout<<2;
	}else{
		cout<<1;
	}
	
	cout<<endl;
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




