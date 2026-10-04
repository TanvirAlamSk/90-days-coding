#include<bits/stdc++.h>
using namespace std;

int main(){
	int i,t,n,ui,ans=0;
	cin>>t;
	
	while(t--){
		cin>>n;
		int ar[101];
		ans=0;
		for(i=0;i<=100;i++){
			ar[i]=0;
		}
		
		for(i=1;i<=n;i++){
			cin>>ui;
			ar[ui]=1;
		}
		
		for(i=1;i<=100;i++){
			if(ar[i]==1){
				ans++;
			}
		}
		
		cout<<ans<<endl;
	}
	
	return 0;
}


