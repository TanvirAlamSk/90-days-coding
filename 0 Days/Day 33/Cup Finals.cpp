#include<bits/stdc++.h>
using namespace std;

int solve() {
    int x,y,d;
    cin>>x>>y>>d;
    
    if(abs(x-y)>d){
		cout<<"NO"<<endl;
	}else{
		cout<<"YES"<<endl;
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

