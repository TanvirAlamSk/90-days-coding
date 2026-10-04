#include<bits/stdc++.h>
using namespace std;

void solve() {
	int x;
	cin>>x;
	
	if(x%3==0){
		cout<<3<<endl;
	}else{
		cout<<1<<endl;
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







