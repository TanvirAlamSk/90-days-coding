#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,n,temp=0,ans=10001;
	cin>>n;
	int arr[n];
	
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	temp=arr[0]+arr[1];
	ans=min(ans,temp);
	
	for(i=2;i<n;i++){
		temp+=arr[i];
		temp-=arr[i-2];
		ans=min(ans,temp);
	}
	
	cout<<ans<<endl;
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
