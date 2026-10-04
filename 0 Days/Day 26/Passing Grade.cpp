#include<bits/stdc++.h>
using namespace std;

int main(){
	int i,t,n,ui,ans,a;
	cin>>t;
	
	while(t--){
		cin>>n;
		ans=0;
		for(i=0;i<n;i++){
			cin>>ui;
			if(i==0){
				a=ui;
			}
			if(ui>=a){
				ans++;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}

