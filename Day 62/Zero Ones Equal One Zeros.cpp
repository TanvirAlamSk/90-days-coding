#include<bits/stdc++.h>
using namespace std;

const int mx=1e5+5;

void solve(){
	int n,i;
	cin>>n;
	
	for(i=1;i<=n;i++){
		if(i==1||i==n){
			cout<<1;
		}else{
			cout<<0;
		}
	}
	cout<<endl;
	
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


