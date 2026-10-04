#include<bits/stdc++.h>
using namespace std;


int solve() {
    int i,n,m,sad=0,ui;
    cin>>n>>m;
    int arr[n+1]={0};
    
    for(i=1;i<=n;i++){
		cin>>arr[i];
	}
	
	for(i=0;i<m;i++){
		cin>>ui;
		if(arr[ui]==0){
			sad++;
		}else{
			arr[ui]--;
		}
		
	}
    
	cout<<sad<<endl;
	
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;

    while(T--){
        solve();
    }

    return 0;
}


