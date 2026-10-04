#include<bits/stdc++.h>
using namespace std;


void solve(){
	int n;
	cin>>n;
	
	if(n<4){
		cout<<-1<<endl;
	}else{
		cout<<3*n-3<<endl;
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
