#include<bits/stdc++.h>
using namespace std;


int solve() {
    int i,n,ach=0;
    cin>>n;
    int arr[n];
    
    for(i=0;i<n;i++){
		cin>>arr[i];
	}
	
	for(i=0;i<n;i++){
		if(arr[i]>ach){
			cout<<1<<" ";
			ach=arr[i];
		}else{
			cout<<0<<" ";
		}
	}
	cout<<endl;
    
    return 0;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T;
	cin>>T;
	
	while(T--){
		solve();
	}
}
