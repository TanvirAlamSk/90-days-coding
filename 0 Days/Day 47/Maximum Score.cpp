#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,b,n,sum=0,mn=101;
	cin>>n;
	
	int arr[n];
	
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	
	for(i=0;i<n;i++){
		cin>>b;
		sum+=arr[i];
		if(arr[i]-b<mn){
			mn=arr[i]-b;
		}
	}
	
	cout<<sum-mn<<endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T=1;
	cin>>T;
	
	while(T--){
		solve();
	}
}



