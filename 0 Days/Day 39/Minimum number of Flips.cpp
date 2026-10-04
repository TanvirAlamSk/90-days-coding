#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,n,ui,cnt1=0,cnt2=0;
	cin>>n;
	
	for(i=0;i<n;i++){
		cin>>ui;
		if(ui==1){
			cnt1++;
		}else{
			cnt2++;
		}
	}
	
	if(n%2==1){
		cout<<-1<<endl;
	}else{
		cout<<abs(cnt2-cnt1)/2<<endl;
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



