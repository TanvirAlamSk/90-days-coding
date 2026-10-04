#include<bits/stdc++.h>
using namespace std;

void solve(){
	long long n,m;
	cin>>n>>m;
	if(m>=n && (m-n)%2==0 && m<=n*3){
		cout<<"YES\n";
	}else{
		cout<<"NO\n";
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
}
