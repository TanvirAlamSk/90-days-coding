#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,k;
	cin>>n>>k;
	
	if(n%k==0){
		cout<<n/k<<endl;
	}else{
		cout<<-1<<endl;
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
}




