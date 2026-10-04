#include<bits/stdc++.h>
using namespace std;

int solve() {
    int i,n,d,t,sp=0,ans=0;
    cin>>n;
    
    for(i=0;i<n;i++){
		cin>>d>>t;
		if(d/t>sp){
			ans=i+1;
			sp=d/t;
		}
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

