#include<bits/stdc++.h>
using namespace std;

int solve() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    
    cout<<max(abs(a-c),abs(b-d))<<endl;
    
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
	
	return 0;
}


