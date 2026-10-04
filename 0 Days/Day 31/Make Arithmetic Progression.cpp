#include<bits/stdc++.h>
using namespace std;

int solve() {
    int x,y,z;
    cin>>x>>y>>z;
    
    
    if(2*y==x+z){
		cout<<0<<endl;
	}else{
		cout<<1<<endl;
	}
    
    return 0;
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
