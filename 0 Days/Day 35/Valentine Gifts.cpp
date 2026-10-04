#include<bits/stdc++.h>
using namespace std;

void solve(){
	int x;
	cin>>x;
	
	if(x>126){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
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
