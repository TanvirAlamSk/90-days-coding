#include<bits/stdc++.h>
using namespace std;

int solve(){
	int i,n,ui,ans=0,temp=0;
	cin>>n;
	
	for(i=0;i<n;i++){
		cin>>ui;
		
		if(ui==0){
			ans=max(temp,ans);
			temp=0;
		}else{
			temp++;
		}
	}
	
	cout<<max(temp,ans)<<endl;
	
	return 0;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int t;
	cin>>t;
	
	while(t--){
		solve();
	}
	return 0;
}



