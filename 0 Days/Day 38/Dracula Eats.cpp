#include<bits/stdc++.h>
using namespace std;


int solve() {
    int n;
    cin>>n;
    if(n%7>1){
		cout<<n/7+1<<endl;
	}else{
		cout<<n/7<<endl;
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

