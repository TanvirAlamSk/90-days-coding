#include<bits/stdc++.h>
using namespace std;

void solve(){
	long long x1,x2,x3,v1,v2;
	
	cin>>x1>>x2>>x3>>v1>>v2;
	
	if(abs(x1-x3)*v2>abs(x2-x3)*v1){
		cout<<"Kefa\n";
	}else if(abs(x1-x3)*v2<abs(x2-x3)*v1){
		cout<<"Chef\n";
	}else{
		cout<<"Draw\n";
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
