#include<bits/stdc++.h>
using namespace std;


int solve() {
	int a,b,c,sum,mx;
    cin>>a>>b>>c;
    
    sum=a+b+c;
    mx=max(max(a,b),c);
    
    sum-=mx;
    if(mx-sum>1){
		cout<<"NO"<<endl;
	}else{
		cout<<"YES"<<endl;
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


