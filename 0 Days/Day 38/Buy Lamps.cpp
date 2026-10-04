#include<bits/stdc++.h>
using namespace std;


int solve() {
	int n,k,x,y;
    cin>>n>>k>>x>>y;
    
    if(x>y){
		cout<<k*x+(n-k)*y<<endl;
	}else{
		cout<<n*x<<endl;
	}
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




