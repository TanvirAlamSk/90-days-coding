#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n,ans=0,ui,i;
	cin>>t;
	
	while(t--){
		cin>>n;
		ans=0;
		for(i=1;i<=n;i++){
			cin>>ui;
			ans+=(i*ui);
		}
		cout<<ans<<endl;
	}
	
	return 0;
}

