#include <bits/stdc++.h>
using namespace std;

void solve(){
	int a,b;
	
	cin>>a>>b;
	
	cout<<max(a,b)*2-1<<endl;
	
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T;
	cin>>T;
	
	while(T--){
		solve();
	}
	
	return 0;
}



