#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,n,ans=0;
	cin>>n;
	int arr[n+1];
	
	for(i=1;i<=n;i++){
		cin>>arr[i];
	}
	
	if(arr[1]%2==0){
		arr[0]=1;
	}else{
		arr[0]=0;
	}
	for(i=1;i<=n;i++){
		if((arr[i]%2==1 && arr[i-1]%2==0)||(arr[i]%2==0 && arr[i-1]%2==1)){
			ans++;
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

