#include<bits/stdc++.h>
using namespace std;

void solve(){
	int z,y,a,b,c;
	
	cin>>z>>y>>a>>b>>c;
	
	if(z-y<a+b+c){
		cout<<"NO"<<endl;
	}else{
		cout<<"YES"<<endl;
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


