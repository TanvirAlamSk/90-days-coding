#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,n,ui,temp;
	cin>>n;
	vector<int>vt;

	for(i=0;i<n;i++){
		cin>>ui;
		vt.push_back(ui);
	}
	
	for(i=1;i<n;i++){
		if(vt[i]<vt[i-1]){
			temp=vt[i];
			vt[i]=vt[i-1];
			vt[i-1]=temp;
			break;
		}
	}
	
	for(i=1;i<n;i++){
		if(vt[i]<vt[i-1]){
			cout<<"NO\n";
			return;
		}
	}
	
	cout<<"YES\n";

}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T=1;
    cin>>T;
    
    while(T--){
		solve();
	}
	
	return 0;
}

