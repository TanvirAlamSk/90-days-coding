#include<bits/stdc++.h>
using namespace std;


void solve(){
	int a,b,c,d;
	
	cin>>a>>b>>c>>d;
	
	if(a!=c && b!=d){
		cout<<1<<endl;
	}else if(a==c && b==d){
		cout<<0<<endl;
	}else{
		cout<<2<<endl;
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
	
	return 0;
}





