#include<bits/stdc++.h>
using namespace std;

void solve(){
	int a,b,c;
	cin>>a>>b>>c;
	
	if(a+b+c==180){
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



