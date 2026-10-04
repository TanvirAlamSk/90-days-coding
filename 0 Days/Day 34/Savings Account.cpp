#include<bits/stdc++.h>
using namespace std;

void solve() {
	int x,y,z;
    cin>>x>>y>>z;
    
    if(x*y>z){
		cout<<x-z/y<<endl;
	}else{
		cout<<0<<endl;
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




