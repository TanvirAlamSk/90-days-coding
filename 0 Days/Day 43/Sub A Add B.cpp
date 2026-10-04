#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,a,b;
	cin>>n>>a>>b;
	
	while(n>=a){
		n=n-a+b;
	}
	
	cout<<n<<endl;
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


