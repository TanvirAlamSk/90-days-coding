#include<bits/stdc++.h>
using namespace std;

int solve(){
	int i,n;
	string s;
	cin>>n>>s;
	int arr[26];
	for(i=0;i<26;i++){
		arr[i]=0;
	}
	
	for(i=0;i<n;i++){
		arr[s[i]-'a']++;
		if(arr[s[i]-'a']>1){
			cout<<"Yes"<<endl;
			return 0;
		}
	}
	cout<<"No"<<endl;
	return 0;
}

int main(){
	int t;
	cin>>t;
	
	while(t--){
		solve();
	}
	return 0;
}


