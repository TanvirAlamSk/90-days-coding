#include<bits/stdc++.h>
using namespace std;


int solve() {
    int s,x,y,z;
    cin>>s>>x>>y>>z;
    
    if(s-x-y>=z){
		cout<<0;
	}else if (s-min(x,y)>=z){
		cout<<1;
	}else{
		cout<<2;
	}
    
    cout<<endl;
    
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
}

