#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,n,c,ui,mn=1000,s;
	cin>>n>>c;
	int arr[100+5];
	
	for(i=0;i<=105;i++){
		arr[i]=0;
	}
	
	for(i=0;i<n;i++){
		cin>>ui;
		arr[ui]=1;
		if(mn>ui){
			mn=ui;
		}
	}
	
	s=max(c,mn);
	for(i=s;i<=105;i++){
		if(!arr[i]){
			cout<<i-c<<endl;
			break;
		}
	}
	
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


