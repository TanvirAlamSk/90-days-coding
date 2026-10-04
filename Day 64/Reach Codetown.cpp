#include<bits/stdc++.h>
using namespace std;

int check_vowel(char ch){
	if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
		return 1;
	}
	return 0;
}

void solve(){
	int i,vol=0;
	string s;
	cin>>s;
	vector<int>vt,temp={1,3,5};
	
	for(i=0;i<8;i++){
		if(check_vowel(s[i])){
			vol++;
			vt.push_back(i);
		}
	}
	
	if(vol==3 && vt==temp){
		cout<<"YES\n";
	}else{
		cout<<"NO\n";
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
	
	return 0;
}
