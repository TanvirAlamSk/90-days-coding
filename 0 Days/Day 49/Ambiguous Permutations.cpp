#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	
	while(cin>>n && n!=0){
		int arr[n+1];
		arr[0]=0;
		for(int i=1;i<=n;i++){
			cin>>arr[i];
		}
		
		int is_ambiguous=1;
		for(int i=1;i<=n;i++){
			if(arr[arr[i-1]]!=i){
				is_ambiguous=0;
				break;
			}
		}
		
		if(is_ambiguous){
			cout<<"ambiguous\n";
		}else{
			cout<<"not ambiguous\n";
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T=1;
	//cin>>T;
	
	while(T--){
		solve();
	}
	return 0;
}




