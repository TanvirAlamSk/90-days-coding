#include<bits/stdc++.h>
using namespace std;

void solve(){
	int a,b,c,t,A,B,C;
	cin>>a>>b>>c>>t>>A>>B>>C;
	
	if(a<=A && b<=B && c<=C && t<=A+B+C){
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
	
	return 0;
}



