#include<bits/stdc++.h>
using namespace std;


int solve() {
    int a,b,ans=0;
    cin>>a>>b;
    
    while(a!=b){
		if(a>b){
			ans+=(a+1)/2;
			a=a/2;
		}else{
			ans+=(b+1)/2;
			b=b/2;
		}
	}
	
	cout<<ans<<endl;
	
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

