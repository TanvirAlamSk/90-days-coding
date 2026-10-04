#include<bits/stdc++.h>
using namespace std;

int solve() {
    int i,n,x,ans=1;
    cin>>n>>x;
    
    for(i=1;i<=x-n;i++){
		ans*=2;
	}
    
    cout<<ans<<endl;
    
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

