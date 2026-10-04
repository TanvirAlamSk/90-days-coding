#include<bits/stdc++.h>
using namespace std;

void solve(){
	int a,b,c,d,e;
	cin>>a>>b>>c>>d>>e;
	
	if((a+b<=d && c<=e)||(a+c<=d && b<=e)||(c+b<=d && a<=e)){
		cout<<"YES\n";
	}else{
		cout<<"NO\n";
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
}

