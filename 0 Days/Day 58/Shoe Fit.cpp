#include<bits/stdc++.h>
using namespace std;

void solve(){
	int a,b,c;
	cin>>a>>b>>c;
	
	if(a+b+c>0 && a+b+c<3){
		cout<<1<<"\n";
	}else{
		cout<<0<<"\n";
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

