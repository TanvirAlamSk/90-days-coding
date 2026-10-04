#include<bits/stdc++.h>
using namespace std;


int solve() {
    int i,n,a,b,x,y,ans=10000,res=0;
    cin>>n>>a>>b;
    
    for(i=0;i<n;i++){
		cin>>x>>y;
		res=abs(a-x)+abs(b-y);
		
		if(res<ans){
			ans=res;
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
}

