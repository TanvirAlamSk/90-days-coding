#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,n,f=0;
	string s;
	cin>>n>>s;
	vector<int>arr(26);
	
	for(i=0;i<n;i++){
		arr[s[i]-'a']++;
		if(arr[s[i]-'a']>1){
			f=1;
		}
	}
	
	if(f){
		cout<<n-2<<endl;
	}else{
		cout<<-1<<endl;
	}
	
	
	
	return;
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




