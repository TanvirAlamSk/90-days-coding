#include<bits/stdc++.h>
using namespace std;

int solve(){
	int n,k,g;
	cin>>n>>k;
	
	g=(k+4)/5;
	
	cout<<((n-g*5)+4)/5<<endl;
	
	return 0;
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
