#include<bits/stdc++.h>
using namespace std;

int solve(){
	double i,n,a,b,ui,ca=0,cb=0,ans;
	cin>>n>>a>>b;
	
	for(i=0;i<n;i++){
		cin>>ui;
		if(ui==a){
			ca++;
		}
		
		if(ui==b){
			cb++;
		}
	}
	
	ans=(ca/n)*(cb/n);
	cout<<fixed<<setprecision(8)<<ans<<endl;;
	
	
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


