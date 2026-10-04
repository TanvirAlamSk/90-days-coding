#include<bits/stdc++.h>
using namespace std;

void solve() {
    int i,n,ans;
    cin>>n;
    
    int arr[n];
    
    for(i=0;i<n;i++){
		cin>>arr[i];
	}
    
    ans=n;
    for(i=n-2;i>=0;i--){
		if(arr[i]*2<=arr[n-1]){
			ans=i+1;
		}else{
			break;
		}
	}
	
	cout<<ans<<endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T;
	cin>>T;
	
	while(T--){
		solve();
	}
	return 0;
}


