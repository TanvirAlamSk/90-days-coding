#include<bits/stdc++.h>
using namespace std;

void solve(){
	int p,sol;
	cin>>p;
	
	sol=(p/100)+p%100;
	
	if(sol<=10){
		cout<<sol<<endl;
	}else{
		cout<<-1<<endl;
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
