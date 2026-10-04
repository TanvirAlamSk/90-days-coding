#include<bits/stdc++.h>
using namespace std;

void solve() {
	int i,n,a,b,ui,flag=0,cnt=0;
    cin>>n>>a>>b;
    
    for(i=0;i<n;i++){
		cin>>ui;
		if(ui<a && !flag){
			cnt++;
			flag=1;
		}else if(ui>b && flag){
			flag=0;
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





