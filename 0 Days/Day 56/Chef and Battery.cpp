#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,ans=0,diff;
	cin>>n;
	
	if(n>50){
		diff=n-50;
		if(diff%3==0){
			ans=diff/3;
		}else if(diff%3==1){
			ans=diff/3+2;
		}else{
			ans=diff/3+4;
		}
	}else if(n<50){
		diff=50-n;
		
		if(diff%2==0){
			ans=diff/2;
		}else{
			ans=diff/2+3;
		}
	}
	
	cout<<ans<<"\n";
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


