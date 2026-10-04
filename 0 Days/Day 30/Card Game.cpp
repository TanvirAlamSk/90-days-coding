#include<bits/stdc++.h>
using namespace std;


void solve(){
	int n,x,ev=0;
	cin>>n>>x;
	
	ev=n/2;
	
	if(x%2==0){
		cout<<ev-1<<endl;
	}else{
		cout<<n-ev-1<<endl;
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



