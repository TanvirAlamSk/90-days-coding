#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,n,k,rem=0,day=0,ui;
	cin>>n>>k;
	
	for(i=1;i<=n;i++){
		cin>>ui;
		if(ui+rem<k && !day){
			day=i;
		}else if(ui+rem>=k){
			rem=ui+rem-k;
		}
	}
	
	if(day){
		cout<<"NO "<<day<<endl;
	}else{
		cout<<"YES"<<endl;
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



