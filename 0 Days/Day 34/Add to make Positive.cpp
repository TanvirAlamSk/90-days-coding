#include<bits/stdc++.h>
using namespace std;

void solve() {
    int i,n,ui,sum=0;
    cin>>n;
    
    for(i=0;i<n;i++){
		cin>>ui;
		sum+=ui;
	}
	
	if(sum>-1){
		cout<<0<<endl;
	}else{
		cout<<(sum-n+1)/n*(-1)<<endl;
	}
	
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



