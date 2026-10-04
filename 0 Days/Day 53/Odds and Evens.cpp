#include<bits/stdc++.h>
using namespace std;

void solve(){
	int a,b;	
	cin>>a>>b;
	
	if((a+b)%2==1){
		cout<<"Alice"<<endl;
	}else{
		cout<<"Bob"<<endl;
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


