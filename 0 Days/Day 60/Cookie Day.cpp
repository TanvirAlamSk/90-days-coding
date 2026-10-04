#include<bits/stdc++.h>
using namespace std;

int solve(){
	int i,n,k,ans=1e9,ui;
	cin>>n>>k;
	
	for(i=0;i<n;i++){
		cin>>ui;
		if(ui>=k){
			ans=min(ans,ui%k);
		}
	}
	
	if(ans==1e9){
		cout<<-1<<endl;
	}else{
		cout<<ans<<endl;
	}
	
	return 0;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T=1;
    cin>>T;
    
    while(T--){
		solve();
	}

}




