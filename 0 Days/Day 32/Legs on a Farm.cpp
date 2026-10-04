#include<bits/stdc++.h>
using namespace std;


int solve() {
    int n,res=0;
    cin>>n;
    
    res=n%4;
    
    cout<<n/4+res/2<<endl;
    
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

