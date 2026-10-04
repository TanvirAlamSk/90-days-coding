#include<bits/stdc++.h>
using namespace std;


int solve() {
    int i,x,y;
    cin>>x>>y;
    
    for(i=0;i<x/2;i++){
		cout<<1;
	}
	
	for(i=0;i<y;i++){
		cout<<2;
	}
	
	for(i=0;i<x/2;i++){
		cout<<1;
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

