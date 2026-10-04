#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,n,ui,l=0,r,od=0;
	cin>>n;
	
	for(i=1;i<=n;i++){
		cin>>ui;
		if(ui%2==1){
			od++;
			if(l){
				r=i;
			}else{
				l=i;
				r=i;
			}
		}
	}
	
	if(od%2==0){
		cout<<n<<endl;
	}else{
		cout<<max(n-l,r-1)<<endl;
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T=1;
	cin>>T;
	
	while(T--){
		solve();
	}
	
	return 0;
}
