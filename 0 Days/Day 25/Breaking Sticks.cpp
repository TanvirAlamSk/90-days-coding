#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n,i,ui,ans;
	cin>>t;
	
	while(t--){
		cin>>n;
		ans=0;
		for(i=0;i<n;i++){
			cin>>ui;
			//ans=max(ans,ui-1);
			ans+=(ui-1);
			
		}
		cout<<ans<<endl;
	}
	
	return 0;
}
