#include<bits/stdc++.h>
using namespace std;

const int mx=1e5+5;

void solve(){
	int n,i,ui;
	cin>>n;
	map<int,int>mp;
	for(i=0;i<n;i++){
		cin>>ui;
		mp[ui]++;
	}
	
	for(auto it:mp){
		if(it.second%2==1){
			cout<<it.first<<endl;
			break;
		}
	}
	
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




