#include<bits/stdc++.h>
using namespace std;

void solve(){
	float p,q;
	
	cin>>q>>p;
	
	cout<<fixed<<setprecision(6);
	
	if(q>1000){
		cout<<q*p*.9<<endl;
	}else{
		cout<<p*q<<endl;
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

