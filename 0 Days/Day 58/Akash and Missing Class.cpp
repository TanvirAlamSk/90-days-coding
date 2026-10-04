#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	
	if(n%7==6){
		cout<<n/7+1<<"\n";
	}else{
		cout<<n/7<<"\n";
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



