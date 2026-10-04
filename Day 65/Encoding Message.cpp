#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,n;
	char ch;
	string s;
	cin>>n>>s;

	for(i=0;i<n;i+=2){
		ch=s[i];
		if(i+1<n){
			s[i]=s[i+1];
			s[i+1]=ch;
		}
	}
	
	for(i=0;i<n;i++){
		ch=97+'z'-s[i];
		s[i]=ch;
	}
	cout<<s<<"\n";
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

