#include<bits/stdc++.h>
using namespace std;

void solve() {
    int i,n,ui,cnt=0;
    cin>>n;
    
    for(i=0;i<n;i++){
		cin>>ui;
		
		if(ui>9 && ui<61){
			cnt++;
		}
	}
	
	cout<<cnt<<endl;
    
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

