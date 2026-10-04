#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,n,v=1;
	cin>>n;
	
	if(n==1){
		cout<<-1<<endl;
	}else if(n%2==1){
		for(i=1;i<=n;i++){
			if(i<3){
				cout<<i<<" ";
			}else if(i==3){
				cout<<-i<<" ";
			}else{
				cout<<v<<" ";
				v=0-v;
			}
		}
	}else{
		for(i=1;i<=n;i++){
			if(i%2==0){
				cout<<2<<" ";
			}else{
				cout<<-2<<" ";
			}
		}
	}
	cout<<endl;
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


