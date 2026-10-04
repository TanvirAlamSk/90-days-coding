#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;	
	cin>>n;
	cout<<(n-1)*3-(n-1)/2*3<<endl;
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



