#include<bits/stdc++.h>
using namespace std;

void solve(){
	int l,b;
	
	cin>>l>>b;
	
	if(l*b>l+l+b+b){
		cout<<"Area\n"<<l*b<<endl;
	}else if(l*b<l+l+b+b){
		cout<<"Peri\n"<<l+l+b+b<<endl;
	}else{
		cout<<"Eq\n"<<l*b<<endl;
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T=1;
	//cin>>T;
	
	while(T--){
		solve();
	}
	return 0;
}

